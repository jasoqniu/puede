//
//  main.cpp
//  spoj_ UCV2013A
//
//  Created by Jason Qiu on 15/12/23.
//

#include <iostream>

long long mod = 1000000007;

long long countid(long long N, long long L)
{
    if(N==0)
        return 0;
    if(L==0)
        return 1;
    if(L==1)
        return N%mod;
    else
    {
        N = N%mod;
        L = L%mod;
        long long hasil = countid(N,L/2);
        hasil = (hasil%mod*hasil%mod)%mod;
            
        if(L%2!=0)
            hasil = (hasil%mod*N%mod)%mod;
        return hasil;
    }
}

int main()
{
    long long N;
    long long L;
    while(true)
    {
        scanf("%lld",&N);
        scanf("%lld",&L);
        if(N==0&&L==0)
            break;
        long long hasil=0;
        for(int a=1;a<=L;a++)
        {
            hasil = (hasil%mod + countid(N,a))%mod;
        }
        printf("%lld\n",hasil);
       
    }
}
