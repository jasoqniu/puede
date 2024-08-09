//
//  main.cpp
//  csp2_dptopdown_rekursif_bercabang
//
//  Created by Jason Qiu on 08/12/23.
//
#include<stdio.h>

long long f(int x)
{
    if(x == 1 || x == 2)
        return 1;

    return f(x-1) + f(x-2);
}

int main()
{
    long long hasil = f(50);
    printf("hasil = %lld\n", hasil);
}
