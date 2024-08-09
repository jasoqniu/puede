//
//  main.cpp
//  spoj_TABY
//
//  Created by Jason Qiu on 12/01/24.
//

#include <iostream>
#include <stdlib.h>
#include <cstring>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int n;
        scanf("%d",&n);
        int arr1[n+1];
        int arr2[n+1];
        for(int a=1;a<=n;a++)
        {
            scanf("%d",&arr1[a]);
        }
        for(int a=1;a<=n;a++)
        {
            scanf("%d",&arr2[a]);
        }
        int memo[n+1];
        memset(memo,0,sizeof(n+1));
        for(int a=1;a<=n;a++)
        {
            memo[a]=arr2[a]-arr1[a];
        }
        
        /*
        for(int a=1;a<=n;a++)
        {
            printf("%d",memo[a]);
        }
        printf("\n");
        */
    
        int ans[n+1];
        memset(ans,0,sizeof(n+1));
        ans[1]=abs(memo[1]);
        for(int a=2;a<=n;a++)
        {
            if(memo[a]>0&&memo[a-1]<0)
                ans[a] = abs(memo[a]);
            else if(memo[a]<0&&memo[a-1]>0)
                ans[a] = abs(memo[a]);
            else if(memo[a]==memo[a-1]&&memo[a]!=0)
                ans[a]=0;
            else if(memo[a]==memo[a+1]&&memo[a]!=0)
                ans[a]=1;
            else if(abs(memo[a])<abs(memo[a-1]))
                ans[a]=0;
            else if(abs(memo[a])>abs(memo[a-1]))
                ans[a]=abs(memo[a]-memo[a-1]);
                
        }
         
        int total=0;
        for(int a=1;a<=n;a++)
        {
            total = total + ans[a];
        }
        printf("%d\n",total);

    }
    
}
