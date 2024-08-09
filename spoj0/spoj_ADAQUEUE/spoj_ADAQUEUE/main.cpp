//
//  main.cpp
//  spoj_ADAQUEUE
//
//  Created by Jason Qiu on 06/02/24.
//

#include <iostream>
#include <queue>
#include <deque>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
    int quer;
    scanf("%d",&quer);
    deque<int>dq;
    bool rev=false;
    string command;
    for(int a=1;a<=quer;a++)
    {
        cin>>command;
        int N;
        if(command=="toFront")
        {
            scanf("%d",&N);
            if(!rev)
            {
                dq.push_front(N);
            }
            else
            {
                dq.push_back(N);
            }
        }
        else if(command=="push_back")
        {
            scanf("%d",&N);
            if(!rev)
            {
                dq.push_back(N);
            }
            else
            {
                dq.push_front(N);
            }
        }
        else if(command=="front")
        {
            if(!dq.empty())
            {
                if(!rev)
                {
                    printf("%d\n",dq.front());
                    dq.pop_front();
                }
                else
                {
                    printf("%d\n",dq.back());
                    dq.pop_back();
                }
            }
            else
                printf("No job for Ada?\n");
        }
        else if(command=="back")
        {
            if(!dq.empty())
            {
                if(!rev)
                {
                    printf("%d\n",dq.back());
                    dq.pop_back();
                }
                else
                {
                    printf("%d\n",dq.front());
                    dq.pop_front();
                }
            }
            else
                printf("No job for Ada?\n");
        }
        else if(command=="reverse")
        {
            if(!rev)
                rev=true;
            else if(rev)
                rev=false;
        }
    }
}
