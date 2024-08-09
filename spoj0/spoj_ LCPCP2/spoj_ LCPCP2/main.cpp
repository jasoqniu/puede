//
//  main.cpp
//  spoj_ LCPCP2
//
//  Created by Jason Qiu on 11/12/23.
//

#include <iostream>
long long c(long long b,long long e, long long m)
{
    if(m==0)
        return 0;
    if(e==0)
        return 1;
    else
    {
        long long hasil = c(b,e/2,m);
        hasil = (hasil*hasil)%m;
        
        if(e%2!=0)
            hasil = (hasil*b)%m;
        return hasil;
    }
}
int main()
{
    int k;
    scanf("%d",&k);
    for(int T=1;T<=k;T++)
    {
        long long b,e,m;
        scanf("%lld",&b);
        scanf("%lld",&e);
        scanf("%lld",&m);
        long long x = c(b,e,m);
        printf("%d. ",T);
        printf("%lld\n",x);
    }
}
