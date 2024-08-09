//
//  main.cpp
//  spoj_PQUEUE
//
//  Created by Jason Qiu on 12/03/24.
//

#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        int m;
        scanf("%d",&n);
        scanf("%d",&m);
        int j;
        int ans=0;
        priority_queue <int> pq;
        queue < pair < int, int > > q;
        for(int a=0;a<n;a++)
        {
            scanf("%d",&j);
            q.push(make_pair(a,j));
            pq.push(j);
        }
        while(!q.empty())
        {
            int pos=q.front().first;
            int num=q.front().second;
            q.pop();
            if(num==pq.top())
            {
                ans++;
                pq.pop();
                
                if(pos==m)
                    break;
            }
            else
            {
                q.push(make_pair(pos,num));
            }
        }
        printf("%d\n",ans);
    }
}
