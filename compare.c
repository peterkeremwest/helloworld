#include <stdio.h>
#include "cs50.h"
#include <string.h>


int main(void)
{
    int x = get_int("What's your number x? ");
    int y = get_int("What's your number y? ");
    if (x<y)
    {
        printf ("x is less than y");
    }
    else if (x>y)
    {
        printf("x is more than y");
    }
    else {
        printf("x is equal to y");
    }
    string s = get_string("\n s: ");
    string t = get_string("\n t:");
    if (strcmp(s,t) == 0)
    {
        printf("same\n");
    }
    else 
    {
        printf("different\n"); // this code block will say that the strings are different. more on why below. >> 
    }

}