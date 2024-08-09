//
//  main.cpp
//  spoj6_ WPC4F
//
//  Created by Jason Qiu on 30/10/23.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int testcase;
    int baris, kolom=3;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        scanf("%d",&baris);
        int arr[baris+1][kolom+1];
        for(int b=1;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                scanf("%d",&arr[b][k]);
            }
        }
        int memo[baris+1][kolom+1];
        memset(memo,0,sizeof(memo));
        for(int k=1;k<=kolom;k++)
        {
            memo[1][k]=arr[1][k];
        }
        for(int b=2;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                if(k==1)
                    memo[b][k]=arr[b][k] + min(memo[b-1][k+1],memo[b-1][k+2]);
                else if (k==kolom)
                    memo[b][k]=arr[b][k] + min(memo[b-1][k-1],memo[b-1][k-2]);
                else
                    memo[b][k] = arr[b][k] + min(memo[b-1][k+1],memo[b-1][k-1]);
            }
        }
        int ans=1000000000;
        for(int k=1;k<=kolom;k++)
        {
            ans = min(ans,memo[baris][k]);
        }
        printf("%d\n",ans);
    }
}
