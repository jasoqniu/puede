//
//  main.cpp
//  spoj_ASSIST
//
//  Created by Jason Qiu on 25/12/23.
//

#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

ll prime[35005];
bool bo[35005];

int main()
{
    memset(bo,true,sizeof(bo));
    int posisi=1;
    for(int a=2;a<=35000;a++)
    {
        if(bo[a]==true)
        {
            int catatan=0;
            prime[posisi]=a;
            posisi++;
            for(int b=a+1;b<=35000;b++)
            {
                if(bo[b]==true)
                {
                    catatan++;
                }
                if(catatan==a)
                {
                    bo[b]=false;
                    catatan=0;
                }
            }
        }
    }
    while(true)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        printf("%lld\n",prime[n]);
    }
}
