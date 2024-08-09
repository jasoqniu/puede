//
//  main.cpp
//  KUDA_CATUR
//
//  Created by Jason Qiu on 12/03/24.
//

#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
    int x1;
    int y1;
    scanf("%d",&x1);
    scanf("%d",&y1);
    int x2;
    int y2;
    scanf("%d",&x2);
    scanf("%d",&y2);
    queue< pair<int, pair<int, int> > > kuda;
    bool visited[8+5][8+5];
    memset(visited,false,sizeof(visited));
    int arr[8+5][8+5];
    memset(arr,0,sizeof(arr));
    arr[x2][y2]=1;
    kuda.push(make_pair(x1, make_pair(y1, 0)));
    visited[x1][y1] = true;
    
    int ans=-1;
    
    while(!kuda.empty())
    {
        int x = kuda.front().first;
        int y = kuda.front().second.first;
        int step = kuda.front().second.second;
        
        kuda.pop();
        
        if(x==x2&&y==y2)
        {
            ans = step;
            break;
        }
        
        if (x-2>=1 && y+1<=8 && !visited[x-2][y+1])
        {
            visited[x-2][y+1] = true;
            kuda.push(make_pair(x-2, make_pair(y+1,step+1)));
        }

        if (x-2>=1 && y-1>=1 && !visited[x-2][y-1])
        {
            visited[x-2][y-1] = true;
            kuda.push(make_pair(x-2, make_pair(y-1,step+1)));
        }
        
        if (x+2<=8 && y+1<=8 && !visited[x+2][y+1])
        {
            visited[x+2][y+1] = true;
            kuda.push(make_pair(x+2, make_pair(y+1,step+1)));
        }
        
        if (x+2<=8 && y-1>=1 && !visited[x+2][y-1])
        {
            visited[x+2][y-1] = true;
            kuda.push(make_pair(x+2, make_pair(y-1,step+1)));
        }
        
        if (x-1>=1 && y+2<=8 && !visited[x-1][y+2])
        {
            visited[x-1][y+2] = true;
            kuda.push(make_pair(x-1, make_pair(y+2,step+1)));
        }
        
        if (x-1>=1 && y-2>=1 && !visited[x-1][y-2])
        {
            visited[x-1][y-2] = true;
            kuda.push(make_pair(x-1, make_pair(y-2,step+1)));
        }
        
        if (x+1<=8 && y+2<=8 && !visited[x+1][y+2])
        {
            visited[x+1][y+2] = true;
            kuda.push(make_pair(x+1, make_pair(y+2,step+1)));
        }
        
        if (x+1<=8 && y-2>=1 && !visited[x+1][y-2])
        {
            visited[x+1][y-2] = true;
            kuda.push(make_pair(x+1, make_pair(y-2,step+1)));
        }
    }
    printf("%d\n",ans);
}
