//
//  main.cpp
//  spoj_ ABCPATH
//
//  Created by Jason Qiu on 13/02/24.
//

#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include <utility>
#include <queue>
using namespace std;
int main()
{
    int cases=1;
    while(true)
    {
        int bar;
        int kol;
        scanf("%d",&bar);
        scanf("%d",&kol);
        if(bar==0&&kol==0)
            break;
        char arr[bar+5][kol+5];
        
        queue< pair<int, pair<int, int> > > antri;
        bool visited[55][55];
        memset(visited,false,sizeof(visited));
        
        for(int b=1;b<=bar;b++)
        {
            for(int k=1;k<=kol;k++)
            {
                scanf(" %c",&arr[b][k]);
                if(arr[b][k]=='A')
                {
                    antri.push(make_pair(b, make_pair(k, 1)));
                    visited[b][k] = true;
                }
            }
        }
        int ans=0;
        while(!antri.empty())
        {
            int x = antri.front().first;
            int y = antri.front().second.first;
            int step = antri.front().second.second;
            char karakter = arr[x][y] + 1;
            antri.pop();
            
            ans = step;

            if(y<kol && arr[x][y+1]==karakter)
            {
                if(!visited[x][y+1])
                {
                    visited[x][y+1] = true;
                    antri.push(make_pair(x, make_pair(y+1,step+1)));
                }
            }
            if(y>1 && arr[x][y-1]==karakter)
            {
               if(!visited[x][y-1])
               {
                   visited[x][y-1]=true;
                   antri.push(make_pair(x,make_pair(y-1,step+1)));
               }
            }
            if(x<bar && arr[x+1][y]==karakter)
            {
               if(!visited[x+1][y])
               {
                   visited[x+1][y]=true;
                   antri.push(make_pair(x+1,make_pair(y,step+1)));
               }
            }
            if(x>1 && arr[x-1][y]==karakter)
            {
               if(!visited[x-1][y])
               {
                   visited[x-1][y]=true;
                   antri.push(make_pair(x-1,make_pair(y,step+1)));
               }
            }
            if(y<kol && x<bar && arr[x+1][y+1]==karakter)
            {
                if(!visited[x+1][y+1])
                {
                    visited[x+1][y+1] = true;
                    antri.push(make_pair(x+1, make_pair(y+1,step+1)));
                }
            }
            if(y>1 && x>1 && arr[x-1][y-1]==karakter)
            {
                if(!visited[x-1][y-1])
                {
                    visited[x-1][y-1] = true;
                    antri.push(make_pair(x-1, make_pair(y-1,step+1)));
                }
            }
            if(y>1 && x<bar && arr[x+1][y-1]==karakter)
            {
                if(!visited[x+1][y-1])
                {
                    visited[x+1][y-1] = true;
                    antri.push(make_pair(x+1, make_pair(y-1,step+1)));
                }
            }
            if(y<kol && x>1 && arr[x-1][y+1]==karakter)
            {
                if(!visited[x-1][y+1])
                {
                    visited[x-1][y+1] = true;
                    antri.push(make_pair(x-1, make_pair(y+1,step+1)));
                }
            }
    
        }
        printf("Case %d: %d\n",cases,ans);
        cases++;
    }
}
