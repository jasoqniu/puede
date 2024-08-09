//
//  main.cpp
//  spoj_EKO
//
//  Created by Jason Qiu on 26/01/24.
//

#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    int wood;
    scanf("%d",&n);
    scanf("%d",&wood);
    int arr[n+1];
    int maxh=0;
    for(int a=1;a<=n;a++)
    {
        scanf("%d",&arr[a]);
        if(arr[a]>maxh)
            maxh=arr[a];
    }
    //printf("%lld\n",maxh);
    long long kiri=0;
    long long kanan=maxh;
    long long ans=0;
    while(kiri<=kanan)
    {
        long long kb=0;
        long long tengah = (kiri + kanan)/2;
        
        for(int a=1;a<=n;a++)
        {
            if(arr[a]>tengah)
                kb = kb + (arr[a]-tengah);
            else
                kb = kb + 0;
        }
        if(kb==wood)
        {
            ans = tengah;
            break;
        }
        else if(kb>wood)
        {
            ans = max(ans, tengah);
            kiri = tengah+1;
        }
        else if(kb<wood)
        {
            kanan = tengah-1;
        }
    }
    printf("%lld\n",ans);
}
