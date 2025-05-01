#ifndef IN_MEMORY_DB_H
#include <sstream>
#include <exception>
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class InMemoryDB{
private:
    unordered_map<string, int> db;
    unordered_map<string, int> uncommitted_db;
    bool transaction = false;

public:
    void begin_transaction();
    void put(string key, int value);
    int get(string key);
    void commit();
    void rollback();
};

#endif