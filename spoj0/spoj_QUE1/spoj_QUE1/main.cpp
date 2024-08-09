//
//  main.cpp
//  spoj_QUE1
//
//  Created by Jason Qiu on 08/02/24.
//

#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        scanf("%d",&n);
        priority_queue<pair<int,int> >pq;
        pair<int,int>p;
        int tempatduduk[n+5];
        
        int arrtinggi[n+5];
        int arrjumlah[n+5];
        
        memset(tempatduduk,0,sizeof(tempatduduk));
        
        for(int a=1;a<=n;a++)
        {
            scanf("%d",&arrtinggi[a]);
        }
        for(int a=1;a<=n;a++)
        {
            scanf("%d",&arrjumlah[a]);
        }
        for(int a=1;a<=n;a++)
        {
            arrtinggi[a] = arrtinggi[a] * -1;
            p.first = arrtinggi[a];
            p.second = arrjumlah[a];
            pq.push(p);
        }
        int pos=1;
        for (int a=1;a<=n;a++)
        {
            if(tempatduduk[pq.top().second + pos] != 0)
            {
                
                while(tempatduduk[pq.top().second + pos] != 0)
                {
                    pos++;
                }
            }
            tempatduduk[pq.top().second + pos] = -pq.top().first;
            pq.pop();
        }
        for(int a=1;a<=n;a++)
        {
            printf("%d\n",tempatduduk[a]);
        }
    }
}
