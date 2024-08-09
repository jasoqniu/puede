//
//  main.cpp
//  stpar_ril
//
//  Created by Jason Qiu on 02/02/24.
//


#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int c;
    while(true)
    {
        scanf("%d", &c);
        if(c==0)break;
        int start[c+5];
        int end[c+5];
        stack<int> side;
        
        for(int a=1;a<=c;a++)
        {
            scanf("%d",&start[a]);
        }
        
        int pos=1;
        for(int a=1;a<=c;a++)
        {
            if(side.empty() || start[a]<side.top() )
            {
                side.push(start[a]);
            }
            else if(start[a]>side.top())
            {
                while(start[a]>side.top())
                {
                    end[pos]=side.top();
                    pos++;
                    side.pop();
                    if ( side.empty() )
                        break;
                }
            }
        }
        
        while(!side.empty())
        {
            end[pos]=side.top();
            pos++;
            side.pop();
        }
        
        bool yes=true;
        for(int a=1;a<=c;a++)
        {
            if(end[a] != a)
            {
                yes=false;
                break;
            }
        }
        if(yes)
            printf("yes\n");
        else
            printf("no\n");
    }
}
