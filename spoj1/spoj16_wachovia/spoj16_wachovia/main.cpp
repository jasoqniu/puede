//
//  main.cpp
//  spoj16_wachovia
//
//  Created by Jason Qiu on 17/11/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int testcases;
    scanf("%d",&testcases);
    for(int tc=1;tc<=testcases;tc++)
    {
        int maxweight;
        int maxbag;
        scanf("%d",&maxweight);
        scanf("%d",&maxbag);
        
        int weight[maxbag+5];
        int bag[maxbag+5];
        
        for(int a=1;a<=maxbag;a++)
        {
            scanf("%d",&weight[a]);
            scanf("%d",&bag[a]);
        }
        
        int memo[maxbag+1][maxweight+1];
        memset(memo,0,sizeof(memo));

        for(int baris=1;baris<=maxbag;baris++)
        {
            for(int kolom=0;kolom<=maxweight;kolom++)
            {
                if(weight[baris]>kolom)
                    memo[baris][kolom]=memo[baris-1][kolom];
                else
                {
                    int skip = memo[baris-1][kolom];
                    int sisa = kolom-weight[baris];
                    int steal = bag[baris]+memo[baris-1][sisa];
                    memo[baris][kolom]=max(skip,steal);
                }
            }
        }
        printf("Hey stupid robber, you can get %d.\n",memo[maxbag][maxweight]);
        
    }
}
