#include <stdio.h>
//#include <cs50.h> // when you disable cs.50 string wont work as a keyword.

int main(void)
{
    int n = 50;
    // & goes to the address of the variable in the memory.
    // * goes to the pointer of the address of the variable.
    /*
    int n = 50;
    */
    int *p = &n;
    //printf("number: %i",n); //an integer is 4 bytes, so this particular n variable occupies 4 bytes of memory.
    printf("%p\n", &n); // %p is for pointer.
    printf("second, but same %p\n", p);
    printf("%i\n", *p); // this will print 50; dereferencing; going to where pointer p is directing at.

    //string s = "HI!";
    char *s = "HI!";
    printf("pointer: %p string: %s\n", s,s);  //    %p will always go to pointer, %s will treat it as a char/string.
    printf("%p\n", &s[0]);                     //    these lines will both give the address of the first character in the character sequence. 
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *s+1); // while *s+1 will be printing out the next letter on the alphabet, *(s+1) will print the next char in the sequence of the current string.
    // printf("%c\n", *(s+10000));  this is a liability, which will cause a segmentation fault because you'd be trying to reach a portion of the memory that's possibly not allocated.
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
    




}