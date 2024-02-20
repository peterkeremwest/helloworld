#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int number;
    struct node *next;
}
node; 

int main(int argc, char *argv[])
{
    /*
    int list[3];

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i<3; i++)
    {
        printf("%i\n", n);              // with this method you won't have efficient performance when it's time to expand the list.
    }    

    int *list = malloc(3*sizeof(int)); //allocated space of 3 integers.
    if(list == NULL)
    {
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    /*int *tmp = malloc(4*sizeof(int)); // Instead of this repeating function we will use a new function called realloc, which will allows us to repeat the same, with a new, reallocated memory. */
    /*
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    */

    /*for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];               //We don't need this for loop since we're using realloc func.  
    }
    */
    //list = tmp;

    //list[3] = 4;



    /*
    
    free(list);

    list = tmp;  
    
    */
/*

    for (int i = 0; i<3; i++)
    {
        printf("%i\n", list[i]);
    }
    
*/

    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        } 
        n->number = number;
        n->next = NULL;

        n->next = list;
        list = n;
    }

    node *ptr = list;
    while (ptr !=NULL)
    {
        printf ("%i\n", ptr->number);
        ptr = ptr->next;
    }
    ptr = list;
    while (ptr !=NULL)
    {
        node *next = ptr->next; //after freeing pointer(ptr) you can't access it anymore. that's why we set a temporary solution for pointer by arranging it to the address of "next" part of the node, so when we're done freeing the space, we can point it back to next, picking up from where we left off. 
        free(ptr);
        ptr = next;
    }

}