#ifndef SQLPARSER_TABLEACCESS_H
#define SQLPARSER_TABLEACCESS_H

#include <vector>
#include <map>
#include <iterator>
#include <unordered_map>

namespace hsql {
    enum class TableOperation {
        Read,
        Modify
    };
    typedef std::unordered_map<std::string, TableOperation> TableAccessMap;

    class TableAccess {
    public:
        virtual void tablesAccessed(TableAccessMap &t) const = 0;
        static void addReadEntry(TableAccessMap& t, const char *table, const char *db)  {
          std::string key = buildKey(table, db);
          TableAccessMap::const_iterator it = t.find(key);
          if (it == t.end()) {
            t[key] = TableOperation::Read;
          }
        }
        static void addWriteEntry(TableAccessMap& t, const char *table, const char *db)  {
            t[buildKey(table, db)] = TableOperation::Modify;
        }
        static void addOperation(TableAccessMap &t, const char *table, const char *db, TableOperation op)  {
            if (op == TableOperation::Read) {
                addReadEntry(t, table, db);
            } else {
                addWriteEntry(t, table, db);
            }
        }
        virtual ~TableAccess() {}
    private:
        static std::string buildKey(const char *table, const char *db) {
          std::string key;
          if (db != nullptr) {
            key.append(db);
          }
          key.append(".").append(table);
          return key;
        }
    };
} // namespace hsql

#endif // SQLPARSER_TABLEACCESS_H
