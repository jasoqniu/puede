//
//  main.cpp
//  spoj14_sumtrian
//
//  Created by Jason Qiu on 17/11/23.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int baris;
        scanf("%d",&baris);
        

        int arr[baris+5][baris+5];
        for(int b=1;b<=baris;b++)
        {
            for(int k=1;k<=b;k++)
            {
                scanf("%d",&arr[b][k]);
            }
        }
        

        int memo[baris+1][baris+1];
        memset( memo, 0, sizeof(memo));
        

            memo[1][1] = arr[1][1];
        

        for(int b=2;b<=baris;b++)
        {
            for(int k=1;k<=b;k++)
            {
                if ( k == 1)
                    memo[b][k] = arr[b][k] + memo[b-1][k];
                
                else if ( k == b)
                    memo[b][k] = arr[b][k] + max( memo[b-1][k], memo[b-1][k-1]);
                else
                    memo[b][k] = arr[b][k] + max( memo[b-1][k], memo[b-1][k-1]);
                    //memo[b][k] = arr[b][k] + max( memo[b-1][k], max(memo[b-1][k-1], memo[b-1][k-1]) );
            }
        }

        int final=0;
        for(int k=1;k<=baris;k++)
        {
            final = max(final,memo[baris][k]);
        }
        printf("%d\n",final);
    }
}
