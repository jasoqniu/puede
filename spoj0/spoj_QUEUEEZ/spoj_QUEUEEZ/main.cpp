//
//  main.cpp
//  spoj_QUEUEEZ
//
//  Created by Jason Qiu on 06/02/24.
//

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>q;
    int qry;
    scanf("%d",&qry);
    for(int a=1;a<=qry;a++)
    {
        int command;
        scanf("%d",&command);
        if(command==1)
        {
            int push;
            scanf("%d",&push);
            q.push(push);
        }
        else if(command==2)
        {
            if(!q.empty())
                q.pop();
        }
        else if(command==3)
        {
            if(!q.empty())
            {
                printf("%d\n",q.front());
            }
            else
                printf("Empty!\n");
        }
    }
}
