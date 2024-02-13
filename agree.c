#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("Do you agree? ");
    if (c == 'y')
    {
        printf("agreed. \n");
    }
    else if ( c== 'n')
    {
        printf("not agreed.\n");
    }
    else
    {
        printf("invalid selection.\n");
    }

}