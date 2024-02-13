#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("missing command-line argument\n"); //eger girilen arguman sayisi 2 degilse, yani; eger kullanici bir prompt, bir isim girmediyse, komutu tek basina cagirmaya izin vermiyoruz.
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0;                                   //artik echo $? komutu ile yanlis girdi yaptigimizda true, dogru girdide false aliyoruz, belirledigimiz gibi.  int main fonksiyonu ekrana yazmasak da her zaman bir sayisal deger dondurur.
    }
}