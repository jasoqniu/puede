//
//  main.cpp
//  csp3_adjacency_list
//
//  Created by Jason Qiu on 16/02/24.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int jumlahkota;
        int jumlahjalan;
        scanf("%d",&jumlahkota);
        scanf("%d",&jumlahjalan);
        vector< pair<int,int> >arr[jumlahkota+5];
        
        for(int a=1;a<=jumlahjalan;a++)
        {
            int kota;
            int connect;
            int jarak;
            scanf("%d",&kota);
            scanf("%d",&connect);
            scanf("%d",&jarak);
            arr[kota].push_back( make_pair(connect,jarak));
        }
        printf("case #%d\n",t);
        for(int a=1;a<=jumlahkota;a++)
        {
            int kota_terhubung = arr[a].size();
            for(int b=0;b<kota_terhubung;b++)
            {
                int tujuan = arr[a][b].first;
                int jarak = arr[a][b].second;
                printf("Kota %d terhubung dengan kota %d dengan jarak %d\n",a,tujuan,jarak);
            }
        }
        
    }
}
