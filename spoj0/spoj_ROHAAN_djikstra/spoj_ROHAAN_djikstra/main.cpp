//
//  main.cpp
//  spoj_ROHAAN_djikstra
//
//  Created by Jason Qiu on 16/02/24.
//

#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int dimensi;
        scanf("%d",&dimensi);
        int arr[dimensi+5][dimensi+5];
        for(int b=1;b<=dimensi;b++)
        {
            for(int k=1;k<=dimensi;k++)
            {
                scanf("%d",&arr[b][k]);
            }
        }
        int answer=0;
        int query;
        scanf("%d",&query);
        int kota_asal;
        int kota_tujuan;
        for(int q=1;q<=query;q++)
        {
            
            bool visited[dimensi+5];
            memset(visited,false,sizeof(visited));
            priority_queue< pair< int, int> >djk;
            
            scanf("%d",&kota_asal);
            djk.push(make_pair(0,kota_asal));
            visited[kota_asal]=true;
            
            scanf("%d",&kota_tujuan);
            while(djk.top().second != kota_tujuan)
            {
                int jarak = - djk.top().first;
                int asal = djk.top().second;
                
                djk.pop();
                visited[asal] = true;
                
                for(int x = 1 ; x <= dimensi ; x++ )
                {
                    int destination = x;
                    int cost = jarak + arr[asal][x];
                    if(visited[destination] == false){
                        djk.push(  make_pair(-cost,destination)  );

                    }
                }
            }
                    
            int ans = -djk.top().first;
            answer = ans + answer;
        }
        printf("Case #%d: %d\n",t,answer);
    }
}
