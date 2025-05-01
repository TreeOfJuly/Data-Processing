# Data-Processing
This project implements an in-memory key-value database that stores these pairs on the stack through an unoredered map.
The project demonstrates transaction report in memory databases through the keywords 'BEGIN', 'PUT', 'GET', 'COMMIT', and 'ROLLBACK'.

## HOW TO SET-UP AND RUN

### REQUIREMENTS
- A C++ compiler that supports at least C++17 is needed.
- The tools for make is also recommened.

### STEPS
1. CLONE THE PROJECT (WILL CREATE A DIRECTORY CALL DATA-PROCESSING)
2. OPEN THE PROJECT DIRECTORY
   '''bash
   cd DATA-PROCESSING
   '''
3. BUILD THE PROJECT
   '''bash
   make
   '''
4. RUN THE PROJECT
   '''bash
   ./db
   '''
5. EXECUTE THE HELP COMMAND TO SEE THE AVAILABLE COMMANDS!

#### IF YOU DO NOT HAVE MAKE INSTALLED OR IT DOES NOT WORK, EXECUTE THE FOLLOWING COMMAND ON STEP 3:
'''bash
g++ -std=c++17 -o db main.cpp InMemoryDB.cpp
'''

## HOW TO CONTRIBUTE
If you seek to contribute to this project then do so by reporting any issues you encounter or fork the project and begin developing upon the existing code.

### HOW TO REPORT AN ISSUE
The preferred format for reporting an issue would to keep it concise and short. Please provide a picture of the error or the error log.
Also, provide details on what the former steps were before encountering the error.

### LIST OF POSSIBLE CONTRIBUTIONS
- Adding more functions to further develop the code! Just make sure when adjusting the main.cpp, that the keywords are capitalized, and keep it under three words. Be clear on the arguments needed for the function call as well.
- Optimize the data structures used in the code whether to improve time and space complexity.
- Clean up the code to have better consistency and format.
- Debug any potential errors that you find or issues mentioned from the issues tab.
- Update README.md to include more information if needed!