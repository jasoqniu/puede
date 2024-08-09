//
//  main.cpp
//  tlx_XOR
//
//  Created by Jason Qiu on 25/12/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int memo[20005];
    memset(memo,0,sizeof(memo));
    memo[0]=0;
    int cases;
    scanf("%d",&cases);
    for(int tc=1;tc<=cases;tc++)
    {
        int panjang;
        int n;
        scanf("%d",&panjang);
        for(int a=1;a<=panjang;a++)
        {
            scanf("%d",&n);
            memo[a]=memo[a-1]^n;
        }

        sort(memo,memo+panjang+1);
        int kembar=1;
        int ans=0;
        for(int a=1;a<=panjang;a++)
        {
            if(memo[a]==memo[a-1])
                kembar++;
            else if(memo[a]!=memo[a-1])
            {
                ans = ans +(kembar * (kembar-1))/2;
                kembar = 1;
            }
            if(a==panjang)
                ans = ans +(kembar * (kembar-1))/2;
        }
        printf("Case #%d: %d\n",tc,ans);
    }
}
