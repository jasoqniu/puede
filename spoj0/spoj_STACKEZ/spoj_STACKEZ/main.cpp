//
//  main.cpp
//  spoj_STACKEZ
//
//  Created by Jason Qiu on 02/02/24.
//

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int cases;
    scanf("%d",&cases);
    stack<int> t;
    for(int tc=1;tc<=cases;tc++)
    {
        int q;
        scanf("%d",&q);
        if(q==1)
        {
            int num;
            scanf("%d",&num);
            t.push(num);
        }
        else if(q==2)
        {
            if(!t.empty())
                t.pop();
        }
        else if(q==3)
        {
            if(!t.empty())
                printf("%d\n",t.top());
            else
                printf("Empty!\n");
        }
    }
}
