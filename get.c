//getting integer manually

#include <stdio.h>

int main (void)
{
    int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);       //however when you input a string ie, it'd just return 0.
    //char *s =NULL;
    // we could technically declare a let's say char s[4] for example. but then everytime we put in a value bigger than we allocated, in this case 4 letters, we'd be using a portion of memory we haven't allocated.
    char s[4];
    printf("s: ");
    scanf("%s", s);             //we don't need to add an additional & for a string because string variables are already addresses( a string is an array -starting from the first letter- located on that same address ) 
    printf("s: %s\n", s);       //this will, no matter what i input, will return null. because we haven't allocated any memory for an input string from the user.
}