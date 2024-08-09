//
//  main.cpp
//  spoj_NATALIAG
//
//  Created by Jason Qiu on 08/02/24.
//
#include <iostream>
#include <queue>
#include <utility>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        queue< pair<int, pair<int, int> > > antri;
        bool visited[101][101];
        memset(visited,false,sizeof(visited));
        
        int bar;
        int kol;
        scanf("%d",&bar);
        scanf("%d",&kol);
        char arr[bar+5][kol+5];
        
        for(int b=1;b<=bar;b++)
        {
            for(int k=1;k<=kol;k++)
            {
                scanf(" %c",&arr[b][k]);
                if(arr[b][k]=='$')
                {
                    //#0. Push pintu masuk
                    antri.push(make_pair(b, make_pair(k, 0)));
                    visited[b][k] = true;
                }
            }
        }
        
        int ans = -1;
        while( ! antri.empty() )
        {
            //------------------ #1. Turunkan data dari queue ------------------
            int x = antri.front().first; //baris saat ini
            int y = antri.front().second.first; //kolom saat ini
            int step = antri.front().second.second;
            
            //------------------ #2. pop ------------------
            antri.pop();
            
            //------------------ #3. Push semua yang terhubung dengan tempat saat ini ( current position)  ------------------
            //arah kanan
            if( y < kol )
            {
                if( arr[x][y+1] != '*' && !visited[x][y+1] ) {
                    visited[x][y+1] = true;
                    antri.push(make_pair(x, make_pair(y+1,step+1)));
                }
            }
            
            //arah kiri
            if(y>1)
            {
                if(arr[x][y-1]!='*'&&!visited[x][y-1])
                {
                    visited[x][y+1]=true;
                    antri.push(make_pair(x,make_pair(y-1,step+1)));
                }
            }
            
            //arah bawah
            if(x<bar)
            {
                if(arr[x+1][y]!='*'&&!visited[x+1][y])
                {
                    visited[x+1][y]=true;
                    antri.push(make_pair(x+1,make_pair(y,step+1)));
                }
            }
            
            
            //arah atas
            if(x>1)
            {
                if(arr[x-1][y]!='*'&&!visited[x-1][y])
                {
                    visited[x-1][y]=true;
                    antri.push(make_pair(x-1,make_pair(y,step+1)));
                }
            }
            
            //cek apakah sudah berada di posisi pintu keluar
            if(arr[x][y] == '#')
            {
                ans = step;
                break;
            }
        }
        
        printf("%d\n", ans);
    }
}
