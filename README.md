# Assignment 3
Create a program in which you 
 1. Create a structure having 3 members all of string data type. The members are firstName, lastName, and DOB. These members store the information of first name, last name and date of birth as provided by the user.
 2. Ask the user the number of persons he wants to use this program to store the information.
 3. Create an array of structure (declared in 1) to store the information of number of persons declared in 2.
 4. Write a function in which you ask the user to input the first name, the last name and the DOB for all the persons one by one and store that information in structure declared in 3. Check the first name and the last name are not longer than 10 characters and DOB is exactly 10 digits. Declared the function in a header file (like source.h), definition in  cpp file (like source.cpp) and call in main.cpp file (which has your main function).
 5. Write a function in which all the stored information (in 4) is displayed. Again declare the function in .h file, define in .cpp file and call in main.cpp file.
 6. Write a function which converts all lower case letters in upper case letters in first and last name. Display the contents of the array of structure after conversion. Again declare the function in .h file, define in .cpp file and call in main.cpp file.
 7. Write a function which displays the upper case full name (first name + last name) in sorted orders. Again declare the function in .h file, define in .cpp file and call in main.cpp file. 

You may need to include algorithm.h file (for sort()), iomanip.h file for setw(), cstring.h for string functions. This project test your understanding of array, string, and functions.

# Solution

The solution is built in C++, and has these classes:

Person
* Contains FirstName, LastName, and DateOfBirth
* Has a method to Display Details
* Has a method to check validity
  * FirstName and LastName are less than 10 characters
  * DateOfBirth is exactly 10 characters

StringManipulator
* Has a method to return a lower-case version of the input string
* Has a method to return an upper-case version of the input string
  
The program asks for input, repeating a step if the input for that step is invalid.

After the input is complete the program displays the saved people once as they were entered, then again in all upper-case and all lower-case versions.

There are no comments in the solution, but functions are small and named descriptively.
