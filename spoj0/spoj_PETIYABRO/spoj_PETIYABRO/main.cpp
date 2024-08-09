//
//  main.cpp
//  spoj_PETIYABRO
//
//  Created by Jason Qiu on 27/02/24.
//

#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <cstring>
#define LL long long
using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    
    int milkman[n + 5];
    priority_queue<pair<LL, pair<LL, LL> > > pqmilk;
    
    for (int a=1; a<=n;a++)
    {
        int mm_or_not;
        scanf("%d", &mm_or_not);
        if (mm_or_not==1)
            pqmilk.push(make_pair(0, make_pair(0, a)));
    }
    
    vector< pair <int, int> > arr[n+5];
    
    for (int a=1;a<= m;a++)
    {
        int u, v, c;
        scanf("%d %d %d", &u, &v, &c);
        arr[u].push_back(make_pair(v,c));
        arr[v].push_back(make_pair(u,c));
    }
    bool visited[n+5];
    memset(visited,false,sizeof(visited));
    
    LL answer = 0;
    while (!pqmilk.empty())
    {
        LL j_akumulasi = -pqmilk.top().first;
        LL j_original = pqmilk.top().second.first;
        LL kota_asal = pqmilk.top().second.second;
        pqmilk.pop();
        
        if (visited[kota_asal])
            continue;
        
        visited[kota_asal] = true;
        answer += j_original;
        
        LL jumlah = arr[kota_asal].size();
        for (int a=0;a<jumlah;a++)
        {
            int d = arr[kota_asal][a].first;
            int cost = arr[kota_asal][a].second;
            
            if (!visited[d])
            {
                pqmilk.push(make_pair(-(cost + j_akumulasi), make_pair(cost, d)));
            }
        }
        
    }
    bool imp=false;
    for (LL a=1;a<=n;a++)
    {
        if (!visited[a])
        {
            imp = true;
            break;
        }
    }
    if(imp)
        printf("impossible\n");
    else
        printf("%lld\n",answer);
}

