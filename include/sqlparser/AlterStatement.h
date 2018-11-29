#pragma once

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {
  enum AlterType {
    kAlterTable,
    kAlterSchema,
    kAlterDatabase
  };

  // Represents SQL Alter statements.
  // Example: "ALTER TABLE students ADD column Id varchar (20)"
  struct AlterStatement : SQLStatement {
    AlterStatement(AlterType type);
    virtual ~AlterStatement();
      void tablesAccessed(TableAccessMap& accessMap) const override {
        if (tableName != nullptr) {
            TableAccess::addOperation(accessMap, tableName, schema, TableAccess::OpInsert);
        }
      };

    AlterType type;
    bool dflt;    // default: false
    bool equal;   // default: false
    char* schema;
    char* tableName;
    char* databaseName;
    Expr* charsetName;
    ColumnDefinition* columns;
  };

} // namsepace hsql

