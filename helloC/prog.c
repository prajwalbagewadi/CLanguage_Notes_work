First C Program
Simple C Program's Structure:

Header Files:
The #include directives at the beginning of the program are used to include header files. Header files provide function prototypes and definitions that allow the 
C compiler to understand the functions used in the program.

Main Function:
Every C program starts with the main function. It is the program's entry point, and execution starts from here. 
The main function has a return type of int, indicating that it should return an integer value to the operating system upon completion.

Variable Declarations:
Before using any variables, you should declare them with their data types. 
This section is typically placed after the main function's curly opening brace.

Statements and Expressions:
This section contains the actual instructions and logic of the program. 
C programs are composed of statements that perform actions and expressions that compute values.

Comments:
Comments are used to provide human-readable explanations within the code. 
They are not executed and do not affect the program's functionality. 
In C, comments are denoted by // for single-line comments and /* */ for multi-line comments.

Functions:
C programs can include user-defined functions and blocks of code that perform specific tasks. 
Functions help modularize the code and make it more organized and manageable.

Return Statement:
Use the return statement to terminate a function and return a value to the caller function. 
A return statement with a value of 0 typically indicates a successful execution in the main function, whereas a non-zero value indicates an error or unexpected termination.

Standard Input/Output:
C has library functions for reading user input (scanf) and printing output to the console (printf). 
These functions are found in C programs and are part of the standard I/O library (stdio.h header file). 
It is essential to include these fundamental features correctly while writing a simple C program to ensure optimal functionality and readability.

//header:
#include<stdio.h>
//return-type: main function:
int main(){
  //variable declaration: 
  int a=10;
  //Statements and Expressions:
  printf("hello world!\n");
  a=a*10;
  printf("a=%d\n",a);
  //return statement
  return 0;
}
