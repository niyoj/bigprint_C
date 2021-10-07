/******************************************************************************************************
*   Program name: terminal.c,
*   Author name: NiyojOli (https://www.github.com/niyoj),
*   Created Path: /terminal.c,
*   Created Date: 07 Oct 2021, 12:01:10 (DD MON YYYY, HH:MM:SS),
*   Description: This  program is the base for this project and consists all functions necessary to implement this project.
*******************************************************************************************************/

#include <stdio.h>              //is used for basic I/O operations
#include <string.h>             //is used for executing some operations with strings

// Definition of the letters (A to Z) as arrays starts from here
char A[][10] = {
    {"888888888\0"},
    {"88     88\0"},
    {"88     88\0"},
    {"88     88\0"},
    {"888888888\0"},
    {"88     88\0"},
    {"88     88\0"},
    {"88     88\0"},
    {"88     88\0"}
};

char B[][10] = {
    {"88888888 \0"},
    {"88    888\0"},
    {"88     88\0"},
    {"88    888\0"},
    {"88888888 \0"},
    {"88    888\0"},
    {"88     88\0"},
    {"88    888\0"},
    {"88888888 \0"}
};

char C[][10] = {
    {"888888888\0"},
    {"88     88\0"},
    {"88       \0"},
    {"88       \0"},
    {"88       \0"},
    {"88       \0"},
    {"88       \0"},
    {"88     88\0"},
    {"888888888\0"}
};

char D[][10] = {
    {"888888   \0"},
    {"88   88  \0"},
    {"88    88 \0"},
    {"88     88\0"},
    {"88     88\0"},
    {"88     88\0"},
    {"88    88 \0"},
    {"88   88  \0"},
    {"888888   \0"}
};


char E[][10] = {
    {"888888888\0"},
    {"88       \0"},
    {"88       \0"},
    {"88       \0"},
    {"88888888 \0"},
    {"88       \0"},
    {"88       \0"},
    {"88       \0"},
    {"888888888\0"}
};

char F[][10] = {
    {"88888888\0"},
    {"88      \0"},
    {"88      \0"},
    {"88      \0"},
    {"8888888 \0"},
    {"88      \0"},
    {"88      \0"},
    {"88      \0"},
    {"88      \0"}
};
// Definition section for letters ends here

//function `print_row()` is used by the function `terminal_print()` to print the character row by row
void print_row(char c, int n) {
    if(c == 'A') {
        printf("%s  ", A[n]);
    } else if ( c == 'B') {
        printf("%s  ", B[n]);
    } else if ( c == 'C') {
        printf("%s  ", C[n]);
    } else if ( c == 'D') {
        printf("%s  ", D[n]);
    } else if ( c == 'E') {
        printf("%s  ", E[n]);
    } else if ( c == 'F') {
        printf("%s  ", F[n]);
    }
}

//function `terminal_print()` is the main function used to print the characters in terminal we want
//Use of this function can be seen inside `./docs/` folder
int terminal_print(char str[]) {
    char len = strlen(str);                 //determining the length of characters

    for (int i=0; i<9; i++) {               //start looping for 1 to 9th row of the array
        for(int j=0; j<len; j++) {          //start looping for each character given
            char c = str[j];
            print_row(c, i);                //prints the nth row of the character                
        }
        printf("\n");                       //prints the newline after nth row is printed
    }
}