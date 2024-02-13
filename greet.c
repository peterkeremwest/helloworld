#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) //her zamanki gibi int main'e void komutu vermek yerine, argv isimli bir string dizisi tanimladik, bu dizinin kac elemani oldugunun kaydini tutabilmek adina da argument counter, int argc ekledik.
{
    if(argc==2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
    /*string name = get_string("What's your name?");
    printf("hello, %s", name);*/
    /*printf("hello, %s\n", argv[1]); */        //normalde dizinin ilk elemani 0'dan baslasa da bu dizinin ilk elemani programin komutu-argumani olan ./greet oluyor. bu yuzden argv[0] yazarsak hello, ./greet yazar.
}