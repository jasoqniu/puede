//
//  main.cpp
//  csp2_ch2_01
//
//  Created by Jason Qiu on 01/12/23.
//
/*
 Latihan Function Tipe Data
 ==================
 1. Bilangan Prima
 #include<stdio.h>

 ....
 ?
 ....


 int main()
 {
     int n;
     scanf("%d", & n);
     if( isPrime(n) )
         printf("Prime");
     else
         printf("Not Prime");
 }

 note:
 -----
 *) int main HARUS SAMA (tidak boleh diubah)
 *) tulis function agar program diatas dapat berjalan dengan baik
 */
#include <iostream>

int isPrime(int n)
{
    if(n==0||n==1)
        return false;
    
    for(int a=2;a<=sqrt(n);a++)
    {
        if(n%a==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", & n);
    if( isPrime(n) )
        printf("Prime");
    else
        printf("Not Prime");
}
