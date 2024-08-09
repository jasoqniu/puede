//
//  main.cpp
//  spoj_EZDIJKST
//
//  Created by Jason Qiu on 23/02/24.
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
        int bar;
        int kol;
        scanf("%d",&bar);
        scanf("%d",&kol);
        vector< pair<int , int> >arr[bar+5];
        bool visited[bar+5];
        memset(visited, false, sizeof(visited));
        for(int a=1;a<=kol;a++)
        {
            int kota;
            int connect;
            int jarak;
            scanf("%d",&kota);
            scanf("%d",&connect);
            scanf("%d",&jarak);
            arr[kota].push_back( make_pair(connect,jarak));
        }
        bool ketemu=false;
        int from;
        int tujuan;
        scanf("%d",&from);
        scanf("%d",&tujuan);
        priority_queue< pair< int, int> >djk;
        djk.push( make_pair(0,from));
        
        //while(djk.top().second!=tujuan) // cocok untuk sudah pasti ada solsi
        int answer = 0;
        while(djk.empty() == false)
        {
            int distance = -djk.top().first;
            int asal = djk.top().second;
            
            visited[asal] = true;
            djk.pop();
            
            if(asal==tujuan)
            {
                ketemu=true;
                printf("%d\n",distance);
                break;
            }
            
            int jumlah = arr[asal].size();
            for(int x=0;x<jumlah;x++)
            {
                int destination= arr[asal][x].first;
                int cost = arr[asal][x].second;
                if ( visited[destination] == false)
                {
                    djk.push(make_pair(-(cost+distance), destination));
                }
            }
            
        }
        if(!ketemu)
            printf("NO\n");
    }
}
