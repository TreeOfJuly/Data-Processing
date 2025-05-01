#include "InMemoryDB.h"

int main(){
    InMemoryDB db;
    string line;

    while(true){
        cout << "> ";
        getline(cin, line);
        stringstream ss(line);
        string command;
        ss >> command;

        if(command == "HELP"){
            cout << "Commands:\n"
                 << " BEGIN                 -- Begin a new transaction\n"
                 << " PUT key value         -- Add/Update a key to value in in-memory database\n"
                 << " GET key               -- Get the value associated with key\n"
                 << " COMMIT                -- Commit current transaction\n"
                 << " ROLLBACK              -- Rollback current transaction\n"
                 << " EXIT" << endl;
        } else if(command == "BEGIN"){
            try{
                db.begin_transaction();
                cout << "Transaction process has started!" << endl;
            } catch(exception& e){
                cout << "ERROR: " << e.what() << endl;
            }
        } else if(command == "PUT"){
            string key;
            int value;
            ss >> key >> value;
            try{
                db.put(key, value);
            } catch(exception& e){
                cout << "ERROR: " << e.what() << endl;
            }
        } else if(command == "GET"){
            string key;
            ss >> key;
            int value = db.get(key);
            if(value == -1){
                cout << "The key does not exist!" << endl;
            } else{
                cout << "The value of " << key << "is: " << value << endl;
            }
        } else if(command == "COMMIT"){
            try{
                db.commit();
                cout << "Transaction process has been commited!" << endl;
            } catch(exception& e){
                cout << "ERROR: " << e.what() << endl;
            }
        } else if(command == "ROLLBACK"){
            try{
                db.rollback();
                cout << "Transaction process has been rolled back!" << endl;
            } catch(exception& e){
                cout << "ERROR: " << e.what() << endl;
            }
        } else if(command == "EXIT"){
            cout << "The program is terminating. Goodbye!" << endl;
            break;

        } else{
            cout << "NOT A VALID COMMAND!" << endl;
        }
    }
    return 0;
}