/**************************************************************
* Class:  CSC-415-03 Spring 2023
* Name: Mahdi Hassanppour
* Student ID:922278744
* GitHub Name: MHP200
* Project: Assignment 1 – Command Line Arguments
*
* File: Hassanpour_Mahdi_HW1_main.c
*
* Description:
* This assignment is to write a C program that accepts arguments via the command line and then displays each of those arguments to the terminal along with how many arguments there are.
**************************************************************/
#include <stdio.h>

//Assign an int and a char in main as params
//argNum stores number of arguments and args lists  all arguments during run options
int main(int argNum, char * args[]){

        //print the number of arguments
        printf("There were %d arguments on command line\n",argNum);

        //loop through the provided argument, and prtint
        //the number of arguments, and the word for it.
        for (int i=0; i<argNum;  i++) {
                 printf("Argument %02d: %s\n", i, args[i]); }
        return 0;
    }



