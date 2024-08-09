//
//  main.cpp
//  spoj8_hotels
//
//  Created by Jason Qiu on 31/10/23.
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
    int budget;
    scanf("%d",&budget);
    for(int a=1;a<=n;a++)
    {
        scanf("%d",&arr[a]);
    }
    int total=0;
    int ans=0;
    int close=1;
    for(int open=1;open<=n;open++)
    {
        total=total+arr[open];
        while(total>budget)
        {
            total = total - arr[close];
            close++;
        }
            
        ans = max(ans,total);
    }
    printf("%d\n",ans);
}
