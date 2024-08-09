//
//  main.cpp
//  spoj_DOTAA
//
//  Created by Jason Qiu on 06/02/24.
//

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        int m;
        int D;
        scanf("%d",&n);
        scanf("%d",&m);
        scanf("%d",&D);
        
        priority_queue<int> pq;
        int H;
        for(int a=1;a<=n;a++)
        {
            scanf("%d",&H);
            pq.push(H);
        }
        
        bool win=true;
        int towerdilalui = 0;
        while( ! pq.empty())
        {
            int health = pq.top();
            pq.pop();
            if(health>D)
            {
                health = health - D;
                towerdilalui++;
                if ( health > 0)
                    pq.push(health);
            }
        }

        if(towerdilalui >= m)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
