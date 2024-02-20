#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i<3; i++)
    {
        printf("%i\n", n);              // with this method you won't have efficient performance when it's time to expand the list.
    }    */

    int *list = malloc(3*sizeof(int)); //allocated space of 3 integers.
    if(list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    /*int *tmp = malloc(4*sizeof(int)); // Instead of this repeating function we will use a new function called realloc, which will allows us to repeat the same, with a new, reallocated memory. */
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    /*for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];               //We don't need this for loop since we're using realloc func.  
    }
    */
    list = tmp;

    list[3] = 4;



    /*
    
    free(list);

    list = tmp;  
    
    */

    for (int i = 0; i<3; i++)
    {
        printf("%i\n", list[i]);
    }
}