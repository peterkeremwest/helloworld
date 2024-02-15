#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) 
{
    char *s = get_string("s:  ");

    if ( s == NULL)
    {
        return 1;
    }
    
    char *t = malloc(strlen(s) + 1);

    if ( t == NULL)
    {
        return 1;
    }

    strcpy(t, s); // string copy function, which will copy string s into t. 

    for (int i = 0; i<strlen(s) + 1; i++) // we set the limit as strlen(s) + 1 because since malloc doesn't have a null bit by the end of the array, we need to manually add one by virtually copying every character of the string s; including the \0 bit. 
                                            //Again; calling a function inside of a condition loop is not a good coding practice, because you'd be calling this function in every lap of this loop. so we could define an n, integer. assign it to strlen(s) + 1; and then compare n in (i < n) instead.
    {
        t[i] = s[i];
    }

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    //t[strlen(t)] = '\0'; // we could technically add a null char by the end of t to make sure the array doesn't use more memory than it needs, but doing it in the loop above itself is always a better practice.
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // Whenever you allocate memory as a programmer, you need to free it after you're done with it. Especially in programs that always run in the background.

    free(t);    //freeing the allocated memory for t. 

    return 0; 


}