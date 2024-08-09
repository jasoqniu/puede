//
//  main.cpp
//  spoj_HIGHWAYS
//
//  Created by Jason Qiu on 27/02/24.
//

#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <cstring>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int city;
        int highway;
        int start;
        int end;
        scanf("%d",&city);
        scanf("%d",&highway);
        scanf("%d",&start);
        scanf("%d",&end);
        
        vector< pair<int,int> >arr[city+5];
        bool visited[city+5];
        memset(visited,false,sizeof(visited));
        for(int a=1;a<=highway;a++)
        {
            int mulai;
            int tujuan;
            int dist;
            scanf("%d",&mulai);
            scanf("%d",&tujuan);
            scanf("%d",&dist);
            arr[mulai].push_back( make_pair(tujuan,dist));
            arr[tujuan].push_back(make_pair(mulai, dist));
        }
        bool ketemu=false;
        priority_queue< pair<int,int> >dijkstra;
        dijkstra.push( make_pair(0,start));
        
        while(!dijkstra.empty())
        {
            int d= -dijkstra.top().first;
            int pos=dijkstra.top().second;
            visited[pos]=true;
            dijkstra.pop();
            
            if(pos==end)
            {
                ketemu=true;
                printf("%d\n",d);
                break;
            }
            int jumlah = arr[pos].size();
            for(int a=0;a<jumlah;a++)
            {
                int destinasi = arr[pos][a].first;
                int cost = arr[pos][a].second;
                if(!visited[destinasi])
                    dijkstra.push( make_pair( -(cost+d), destinasi));
            }
        }
        if(!ketemu)
            printf("NONE\n");
    }
}
