#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    
    
    //int numbers[] = {20,500,10,5,100,1,50};

    string s = get_string("String?");
    for (int i = 0; i<6; i++)
    {
        if(strcmp(strings[i], s) == 0)         // We can not use == for comparing strings unlike numbers. we use a different function called strcmp for those comparisons.
        {
            printf("Found\n");
            return 0; //I learned that for the program to end on a specific condition, it's good practice to use return codes, therefore when a certain condition is met, you can break out of the loop, or the main function to end the program. 
        }
    }
    printf("not found\n");
    return 1;
}