
// variables in C 
// type variableName = value
// \n = new line character 

// data types and format specifier in C

/*
types     format specifier   size 
int         - %d              4bytes
float       - %f              4bytes
char        - %c              1byte
string      - %s  

int 	2 or 4 bytes
float 	4 bytes
double 	8 bytes
char 	1 byte

*/

#include <stdio.h>

int main(){
    char letter = 'H';
    char name[10] = "Himanshu";

    printf("%c \n",letter);
    printf("%s",name);
    return 0;
}