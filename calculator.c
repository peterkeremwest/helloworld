#include <stdio.h>
#include "cs50.h"

int add(int x, int y);
int substract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int result;
int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    int selection= get_int("Press 1 for summary, 2 for subtraction, 3 for multiply and 4 for division: ");
    switch(selection)
    {
        case 1:
        result=add(x,y);
        printf("summary of x and y is: %i", result);
        break;
        case 2:
        result=substract(x,y);
        printf("subtraction of y from x is: %i", result);
        break;
        case 3:
        result=multiply(x,y);
        printf("x multiplied by y is: %i", result);
        break;
        case 4:
        result=divide(x,y);
        printf("x divided by y is: %i", result);
        break;
    }

}

int add(x, y)
{
    result=x+y;
}
int substract(x, y)
{
    result=x-y;
}
int multiply(x, y)
{
    result=x*y;
}
int divide(x, y)
{
    result=x/y;
}