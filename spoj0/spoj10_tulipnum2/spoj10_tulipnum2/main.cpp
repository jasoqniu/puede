//
//  main.cpp
//  spoj10_tulipnum2
//
//  Created by Jason Qiu on 06/11/23.
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
        int length;
        scanf("%d",&length);
        int numlength[length+1];
        
        int qlength;
        scanf("%d",&qlength);
        
        int num1;
        int num2;
        
        int memo[length+1];
        memset(memo,0,sizeof(memo));
        
        for(int a=1;a<=length;a++)
        {
            scanf("%d",&numlength[a]);
            
            if(a==1)
                memo[a]=1;
            else if ( numlength[a] != numlength[a-1])
                memo[a] = memo[a-1] + 1;
            else
                memo[a] = memo[a-1];
        }
        
        printf("Case %d:\n", tc);
        for(int a=1;a<=qlength;a++)
        {
            scanf("%d",&num1);
            scanf("%d",&num2);
            
            int ans = memo[num2] - memo[num1] + 1;
            printf("%d\n", ans);
        }
        
    }
}
