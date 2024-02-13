#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before:");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n ; i++)
    {
        //if(s[i] >= 'a' && s[i] <= 'z')
        
        //if(islower(s[i])) //bu fonksiyon da ayni sekilde ctype kutuphanesinin bir ozelligi, bir bool sorgusu ve soz konusu karakterin kucuk harf olup olmadigini sorguluyor.
        
        {
            printf("%c", toupper(s[i])); //toupper fonksiyonunun kullanimi. ctype kutuphanesinin bir fonksiyonu ve string veya char'i otomatik olarak buyuk harfe ceviriyor. aynisinin tolower'i da var.
        }
        /*else 
        {
            printf("%c", s[i]);
        }*/ //toupper fonksiyonu otomatik olarak kucuk olani buyuk harfe cevirip kalanina dokunmayacagi icin kodu sadelestirmek ve efektif hale getirmek adina bu sekilde bir degisim yaptik.
    }
    printf("\n");
}