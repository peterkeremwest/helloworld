#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("new x is %i, new y is %i\n", x, y);
}

/*void swap(int a, int b) 
// the output for this function will not swap the values of the integers, we should instead swap the addresses of these integers, declaring the new values of the variables by the address. 
{
    int tmp = a;
    a=b;
    b=tmp;
}*/
void swap (int *a, int *b)
{

    int tmp=*a; //getting the value AT 'a'. goes to the address, gets the number at it.  
    *a = *b;      //go to a's address, set it equal to what is at b's address.
    *b = tmp;     //go to b's address, set it equal to tmp's value. 

}