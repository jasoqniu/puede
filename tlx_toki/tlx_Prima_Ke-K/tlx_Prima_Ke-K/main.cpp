//
//  main.cpp
//  tlx_Prima_Ke-K
//
//  Created by Jason Qiu on 22/12/23.
//

#include <iostream>
#include <cstring>
using namespace std;
long long prime[1000000]; // untuk collect prime number nya
bool bo[1000001]; // false = bukan prime


/*Sieve of Eratosthenes*/

int main()
{
    memset(bo,true,sizeof(bo));
    
    //#1 generate
    for(int a=2;a<=1000000;a++)
    {
        for(int b=2;b<=1000000;b++)
        {
            if(a*b>1000000) //firewall
                break;
                
            bo[a*b]=false;
        }
    }
    
    //#2 collect / mengumpulkan ke dalam array prime
    int catatan = 1;
    for(int x=2;x<=1000000;x++)
    {
        if(bo[x]==true)
        {
            prime[catatan]=x;
            catatan++;
        }
    }
    //#3 menjawab pertanyaan soal
    int t;
    scanf("%d\n",&t);
    for(int testcase=1;testcase<=t;testcase++)
    {
        long long k;
        scanf("%lld",&k);
        printf("%lld\n",prime[k]);
    }
}

