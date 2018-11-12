#ifndef SQLPARSER_UPDATE_STATEMENT_H
#define SQLPARSER_UPDATE_STATEMENT_H

#include "SQLStatement.h"

namespace hsql {

  // Represents "column = value" expressions.
  struct UpdateClause {
    char* column;
    Expr* value;
  };

  // Represents SQL Update statements.
  struct UpdateStatement : SQLStatement {
    UpdateStatement();
    virtual ~UpdateStatement();
      void tablesAccessed(TableAccessMap& accessMap) const override {
        if (updates != nullptr) {
          for (auto it = updates->begin(); it != updates->end(); ++it) {
            (*it)->value->tablesAccessed(accessMap);
          }
        }
        if (where != nullptr) {
          where->tablesAccessed(accessMap);
        }
        if (table != nullptr) {
          table->tablesAccessed(accessMap, TableOperation::Modify);
        }
      };

    // TODO: switch to char* instead of TableRef
    TableRef* table;
    std::vector<UpdateClause*>* updates;
    Expr* where;
  };

} // namsepace hsql

#endif
