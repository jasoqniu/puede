//
//  main.cpp
//  spoj_LASTDIG_real
//
//  Created by Jason Qiu on 11/12/23.
//
#include <iostream>
#include <stdio.h>

int mod = 10;
int f(int base, int pangkat)
{
    if(pangkat == 1)
        return base;
    else if(pangkat==0)
        return 1;
    else
    {
        int hasil = f ( base, pangkat / 2);
        hasil = (hasil%mod * hasil%mod ) %mod;

        if (pangkat % 2 !=0)
            hasil = (hasil%mod * base%mod ) %mod;
        return hasil;
    }
}


int main()
{
    int tc;
    scanf("%d",&tc);
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",f(a,b));
    }
}
