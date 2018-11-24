#pragma once

#include <vector>
#include <map>
#include <iterator>
#include <unordered_map>

namespace hsql {
    typedef std::unordered_map<std::string, std::vector<std::string>> TableAccessMap;

    class TableAccess {
    public:
        const std::string OpUnknown{"unknown"};
        const std::string OpInsert{"insert"};
        const std::string OpSelect{"select"};
        const std::string OpShow{"show"};
        const std::string OpUpdate{"update"};
        const std::string OpDelete{"delete"};
        const std::string OpCreate{"create"};
        const std::string OpDrop{"drop"};
        const std::string OpAlter{"alter"};
        const std::string OpImport{"import"};

        virtual void tablesAccessed(TableAccessMap &t) const = 0;
        static void addOperation(TableAccessMap &t, const char *table, const char *db, const std::string& op)  {
           t[buildKey(table, db)].push_back(op);
         } 
        virtual ~TableAccess() {}
    private:
        static std::string buildKey(const char *table, const char *db) {
          std::string key;
          key.append(table);
          if (db != nullptr) {
              key.append(".").append(db);
          }
          return key;
        }
    };
} // namespace hsql

