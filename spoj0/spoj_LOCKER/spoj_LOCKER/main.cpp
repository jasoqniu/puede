//
//  main.cpp
//  spoj_LOCKER
//
//  Created by Jason Qiu on 18/01/24.
//

#include <iostream>

#define ll long long
#define MOD 1000000007
ll fastexp(ll base, ll pangkat)
{
    if ( pangkat == 0)
        return 1;
    else if(pangkat == 1)
        return base % MOD;
    else
    {
        ll hasil = fastexp ( base, pangkat / 2);
        hasil = (hasil%MOD * hasil%MOD) % MOD ;

        if(pangkat % 2 !=0)
        {
            hasil = (hasil%MOD * base%MOD)%MOD;
        }
        return hasil%MOD;
    }
}
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        ll n;
        scanf("%lld",&n);
        n = n%MOD;
        ll ans=0;
        if (n==2)
            ans = 1;
        else if (n<5)
            ans = n;
        else if(n%3==2)
        {
            ans = (fastexp(3,n/3)*2)%MOD;
        }
        else if(n%3==0)
        {
            ans = (fastexp(3,n/3))%MOD;
        }
        else if(n%3==1)
        {
            ans = (fastexp(3,n/3-1) * 4)%MOD;
        }
        printf("%lld\n",ans);
    }
}
