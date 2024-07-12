# Student_Record_Management_System
# Overview
This project is a Student Record Management System implemented using Linked List of Data Structure. It is used to track, store, and organize student records. It enables easy data management activities with full CRUD (Create, Read, Update, Delete) along with other functionalities (Sort, Save file...)
# Main Menu
Created a executable file named "student" from different modules like st_add.c, st_del.c, st_mod.c, st_pf.c,....etc.., when executed will display on the screen as below 

![Image](https://github.com/users/karravennela/projects/1/assets/168295304/36fda8c4-40ce-45eb-887f-b4ecd4c5f7a7)
# Features
+ CRUD
  - Create : Create or Add The Student Record
    - User has to input name and percentage of the student
  - Read: Show the Complete Student Records
    - The "student_read.dat" is the database file which stores all the student record, so each time this process runs, it gets a updated list from the database file.
  - Update: Update or Modify the Student Record
    - Search: This option prints a sub-menu (fig.1) to search which record is to be modified, options being with "rollno" or "name" or "percentage".
    - If input is rollno, check if the record available or not, if available then present with three options i.e "Modify name" or "Modify percentage" or "Modify both name and percentage"
    - If input is name or percentage, as there is a possibility of multiple existence, user should input rollno which is associated with that (name/percentage) to modify    
  - Delete: Delete a particular Student Record from the database
    - This option should prompt a sub-menu (fig.2) to delete a record "delete by rollno" or "delete by name"
    - If identical names existing, then all the records with the same name should be displayed, so that user can identify the rollno to delete
+ Automatic Rollno Assign
  - When a new record is created the rollno is automatically assigned with least positive number available without duplication
+ Delete all: Delete all the Student Records
+ Save file: The complete list is saved into a file named "student.dat" when called from the menu, the data is written into file in user understandable manner
  - This option should prompt a sub-menu (fig.3) displayed with choice for "save and exit" and "exit wihout saving"
+ Sort: Sort the records
  - This option should prompt a sub-menu (fig.4) with choices "Sort by name" or "Sort by percentage"
+ Reverse: The Student Records are reversed
+ Data Validation
  - Implement form validation to ensure the accuracy and integrity of the entered student information.
  
fig.1
![FIG 1](https://github.com/user-attachments/assets/99540795-dfe8-43cf-886b-f1006976344a)
![FIG 1a](https://github.com/user-attachments/assets/810a28df-105e-4d4d-9218-7cc26bf595d9)

fig.2
![FIG 2](https://github.com/user-attachments/assets/8f3dd2f5-743a-4ad4-ad66-80cda4aa677c)

fig.3
![FIG 3](https://github.com/user-attachments/assets/0474ef04-3055-4770-acd3-0569ff11dd0c)

fig.4
![FIG 4](https://github.com/user-attachments/assets/bbe57c75-c51f-49c8-8361-ad2a86e9eb30)

