//
//  main.cpp
//  spoj15_arraysub
//
//  Created by Jason Qiu on 17/11/23.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int length;
    scanf("%d",&length);
    
    int arr[length+5];
    for(int a=1;a<=length;a++)
    {
        scanf("%d",&arr[a]);
    }
    
    int rangesize;
    scanf("%d",&rangesize);
    
    for(int b=0;b<=length-rangesize;b++)
    {
        int ans=0;
        for(int kuning=1;kuning<=rangesize;kuning++)
        {
            ans=max(ans,arr[b+kuning]);
        }
        printf("%d ",ans);
    }
}
