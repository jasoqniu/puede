//
//  main.cpp
//  spoj10_tulipnum
//
//  Created by Jason Qiu on 03/11/23.
//

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int length;
        scanf("%d",&length);
        int numlength[length+1];
        
        int qlength;
        scanf("%d",&qlength);
        
        int num1;
        int num2;

        for(int a=1;a<=length;a++)
        {
            scanf("%d",&numlength[a]);
        }
        printf("Case %d:",tc);
        for(int a=1;a<=qlength;a++)
        {
            scanf("%d",&num1);
            scanf("%d",&num2);
            int ans=0;
            for(int start=num1;start<=num2;start++)
            {
                if(start==num1)
                    ans=1;
                else if (numlength[start]!=numlength[start-1])
                    ans++;
            }
            printf("%d\n",ans);
        }
    }
}
