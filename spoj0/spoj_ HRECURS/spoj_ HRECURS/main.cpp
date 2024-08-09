//
//  main.cpp
//  spoj_ HRECURS
//
//  Created by Jason Qiu on 04/12/23.
//

#include <iostream>
int arr[1005];
int sum(int x)
{
    if(x==0)
        return 0;
    else
        return arr[x-1]+sum(x-1);
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int length;
        scanf("%d",&length);

        for(int a=0;a<length;a++)
        {
            scanf("%d",&arr[a]);
        }
        printf("Case %d: %d\n",testcase,sum(length));
    }
}
