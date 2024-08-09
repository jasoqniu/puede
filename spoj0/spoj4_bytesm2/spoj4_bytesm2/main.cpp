//
//  main.cpp
//  spoj4_bytesm2
//
//  Created by Jason Qiu on 27/10/23.
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
        int baris, kolom;
        scanf("%d %d",&baris,&kolom);
        
        //1. input array
        int arr[baris+1][kolom+1];
        for(int b=1;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                scanf("%d",&arr[b][k]);
            }
        }
        
        //2. memset 0
        int memo[baris+1][kolom+1];
        memset( memo, 0, sizeof(memo));
        
        //3. copy baris pertama dari arr ke memo
        for(int k=1;k<=kolom;k++)
            memo[1][k] = arr[1][k];
        
        //4. isi memo DP
        for(int b=2;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                if ( k == 1)
                    memo[b][k] = arr[b][k] + max( memo[b-1][k], memo[b-1][k+1]);
                
                else if ( k == kolom)
                    memo[b][k] = arr[b][k] + max( memo[b-1][k], memo[b-1][k-1]);
                else
                    memo[b][k] = arr[b][k] + max( memo[b-1][k], max(memo[b-1][k-1], memo[b-1][k+1]) );
            }
        }
        //5. cari angka terbesar di baris paling bawah?
        int final=0;
        for(int k=1;k<=kolom;k++)
        {
            final = max(final,memo[baris][k]);
        }
        printf("%d\n",final);
    }
}
