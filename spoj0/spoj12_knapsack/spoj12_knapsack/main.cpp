//
//  main.cpp
//  spoj12_knapsack
//
//  Created by Jason Qiu on 09/11/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int s;
    int n;
    scanf("%d",&s);
    scanf("%d",&n);
    int price[n+5];
    int value[n+5];
    int memo[n+1][s+1];
    memset(memo,0,sizeof(memo));
    
    for(int a=1;a<=n;a++)
    {
        scanf("%d",&price[a]);
        scanf("%d",&value[a]);
    }
    
    for(int baris=1;baris<=n;baris++)
    {
        for(int kolom=0;kolom<=s;kolom++)
        {
            if(price[baris]>kolom)
                memo[baris][kolom]=memo[baris-1][kolom];
            else
            {
                int skip = memo[baris-1][kolom];
                int sisauang = kolom-price[baris];
                int beli = value[baris]+memo[baris-1][sisauang];
                memo[baris][kolom]=max(skip,beli);
            }
        }
    }
    printf("%d\n",memo[n][s]);
}

