#include "InMemoryDB.h"

void InMemoryDB::begin_transaction(){
    if(transaction){
        throw runtime_error("Already in transaction process!");
    }
    transaction = true;
    uncommitted_db.clear();
    uncommitted_db = db;
}

void InMemoryDB::put(string key, int value){
    if(transaction){
        throw runtime_error("Already in transaction process!");
    }
    uncommitted_db[key] = value;
}

int InMemoryDB::get(string key){
    auto it = db.find(key);
    if(it != db.end()){
        return it->second;
    }
    return -1;
}

void InMemoryDB::commit(){
    if(!transaction){
        throw runtime_error("Already in transaction process!");
    }
    transaction = false;
    db = uncommitted_db;
}

void InMemoryDB::rollback(){
    if(!transaction){
        throw runtime_error("Already in transaction process!");
    }
    transaction = false;
    uncommitted_db.clear();
}