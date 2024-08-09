//
//  main.cpp
//  spoj_CODFURY
//
//  Created by Jason Qiu on 12/01/24.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int planets;
        scanf("%d",&planets);
        int arr[planets+5];
        int bot;
        scanf("%d",&bot);
        for(int a=1;a<=planets;a++)
            scanf("%d",&arr[a]);
        
        
        int totalbot=0;
        int ansbot=0;
        int totalplanet=0;
        int ansplanet=0;
        int windowclose=1;
        for(int a=1;a<=planets;a++)
        {
            totalbot=totalbot+arr[a];
            totalplanet++;
            while(totalbot>bot)
            {
                totalbot=totalbot-arr[windowclose];
                windowclose++;
                totalplanet--;
            }
            if(totalplanet>ansplanet)
            {
                ansplanet=totalplanet;
                ansbot=totalbot;
            }
            else if(totalplanet==ansplanet)
            {
                ansbot=min(ansbot,totalbot);
            }
        }
        printf("%d %d\n",ansbot,ansplanet);
    }
   
}
