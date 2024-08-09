//
//  main.cpp
//  spoj_BUSYMAN
//
//  Created by Jason Qiu on 08/01/24.
//

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int N;
        scanf("%d",&N);
        pair<int, int>arr[N+5];
        for(int a=1;a<=N;a++)
        {
            scanf("%d",&arr[a].second); //mulai
            scanf("%d",&arr[a].first); //selesai
        }
        sort(arr+1,arr+N+1);
        int ans=1;
        int posisi=1;
        for(int a=2;a<=N;a++)
        {
            if(arr[posisi].first<=arr[a].second)
            {
                ans++;
                posisi=a;
            }
        }
        printf("%d\n",ans);
    }
}
