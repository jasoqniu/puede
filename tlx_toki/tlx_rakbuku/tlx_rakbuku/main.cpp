//
//  main.cpp
//  tlx_rakbuku
//
//  Created by Jason Qiu on 09/01/24.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, maxtinggi;
    scanf("%d %d",&n,&maxtinggi);
    int h[n+5];
    for(int a=1;a<=n;a++)
    {
        scanf("%d",&h[a]);
    }
    sort(h+1,h+n+1,greater<int>());
    int sum=0;
    int ans=0;
    for(int a=1;a<=n;a++)
    {
        if(maxtinggi>=0)
        {
            ans++;
            maxtinggi = maxtinggi - h[a];
        }
        else
            break;
    }
    printf("%d\n",ans);
}
