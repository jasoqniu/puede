//
//  main.cpp
//  spoj7_elis
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
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int a=1;a<=n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int memo[n+1];
    for(int a=1;a<=n;a++)
    {
        memo[a]=1;
    }
    for(int jim=2;jim<=n;jim++)
    {
        for(int puede=1;puede<=jim-1;puede++)
        {
            if(arr[jim]>arr[puede])
                memo[jim] = max ( memo[jim] , memo[puede]+1);
        }
    }
    int ans=0;
    for(int a=1;a<=n;a++)
        ans = max(ans,memo[a]);
    printf("%d\n",ans);
}
