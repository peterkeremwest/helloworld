#include <stdio.h>
#include <cs50.h>

void draw(int n); 

int main(void)
{
    int height = get_int("Height:");
    draw(height);
}

void draw(int n)
{
    if (n<=0)
    {
    
    return;

    }
    
    draw(n-1);

    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    //draw(n+1); //this will create an endless recursive loop because there's no upper limit indicating where the program should be stopping. 
}

