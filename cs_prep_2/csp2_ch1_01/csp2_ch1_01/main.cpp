//
//  main.cpp
//  csp2_ch1_01
//
//  Created by Jason Qiu on 01/12/23.
//
/*1. Bilangan = 1594 (enter)
angka ROMAWI nya = MDXCIV

Diket:
M = 1000    L = 50          I = 1
D = 500       X = 10
C = 100       V = 5

note:
*) Diasumsikan, angka yang diinputkan pasti diantara 1 s/d 3999
*) Buat 4 void, masing-masing 1 parameter. Jika inputan 1594, maka :
-) void ribuan (int x) => variabel x harus berisi 1
-) void ratusan(int x) => variabel x harus berisi 5
-) void puluhan (int x) => variabel x harus berisi 9
-) void satuan (int x) => variabel x harus berisi 4
*/
#include <iostream>
void ribuan(int x)
{
    for(int a=1; a<=x; a++)
        printf("M");
}

void ratusan(int x)
{
    if(x==9)
        printf("CM");
    else if(x==4)
        printf("CD");
    else if(x>=5&&x<=8)
    {
        printf("D");
        for(int a=1; a<=x-5; a++)
            printf("C");
    }
    else
    {
        for(int a=1; a<=x; a++)
            printf("C");
    }
}
void puluhan(int x)
{
    if(x==9)
        printf("XC");
    else if(x==4)
        printf("XL");
    else if(x>=5&&x<=8)
    {
        printf("L");
        for(int a=1; a<=x-5; a++)
            printf("X");
    }
    else
    {
        for(int a=1; a<=x; a++)
            printf("X");
    }
}
void satuan(int x)
{
    if(x==9)
        printf("IX");
    else if(x==4)
        printf("IV");
    else if(x>=5&&x<=8)
    {
        printf("V");
        for(int a=1; a<=x-5; a++)
            printf("I");
    }
    else
    {
        for(int a=1; a<=x; a++)
            printf("I");
    }
}
int main()
{
    int bilangan;
    printf("Bilangan = ");
    scanf("%d",&bilangan);
    ribuan(bilangan/1000);
    ratusan(bilangan%1000/100);
    puluhan(bilangan%100/10);
    satuan(bilangan%10);
    printf("\n");
}
