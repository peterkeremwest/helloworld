#include <stdio.h>
#include "cs50.h"

int main(void)
{
    /*
    string s = "HI!";
    printf("%c %c %c \n", s[0],s[1],s[2]);
    string s = "HI!";
    string t = "BYE!";
    */

    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    //printf("%s\n%s\n", words[0],words[1]);

    printf("%c%c%c\n%c%c%c%c\n",words[0][0],words[0][1],words[0][2],words[1][0],words[1][1],words[1][2],words[1][3]); //for Demonstration purposes, using arrays to print out strings  
}