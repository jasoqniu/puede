//
//  main.cpp
//  tlx_jamuanmakan
//
//  Created by Jason Qiu on 10/01/24.
//

#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    pair<int,int>arr[n+5];
    for(int a=1;a<=n;a++)
    {
        scanf("%d %d",&arr[a].second,&arr[a].first);
        arr[a].first = arr[a].first+arr[a].second;
    }
    sort(arr+1,arr+n+1);
    int posisi=1;
    int ans=1;
    for(int a=2;a<=n;a++)
    {
        if(arr[posisi].first<=arr[a].second)
        {
            ans++;
            posisi=a;
        }
    }
    printf("%d\n",ans);
}
