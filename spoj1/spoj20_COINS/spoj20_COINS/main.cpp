//
//  main.cpp
//  spoj20_COINS
//
//  Created by Jason Qiu on 08/12/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
long long memo[10000005];
long long exchange(long long n)
{
    if(n>10000000)
        return exchange(n/2)+exchange(n/3)+exchange(n/4);
    
    if(n>=((n/2)+(n/3)+(n/4)))
        return memo[n]=n;
    
    if(memo[n]!=0)
        return memo[n];

    return memo[n] = exchange(n/2)+exchange(n/3)+exchange(n/4);;
}

int main()
{

    {
        long long gold;
        while(scanf("%lld",&gold)!=EOF)
            printf("%lld\n",exchange(gold));
    }
}
