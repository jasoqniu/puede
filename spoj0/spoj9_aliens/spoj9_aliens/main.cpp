//
//  main.cpp
//  spoj9_aliens
//
//  Created by Jason Qiu on 03/11/23.
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
        int stations;
        scanf("%d",&stations);
        int arr[stations+1];
        int human;
        scanf("%d",&human);
        for(int a=1;a<=stations;a++)
            scanf("%d",&arr[a]);
        
        
        int totalhuman=0;
        int anshuman=0;
        int totalstation=0;
        int ansstation=0;
        int close=1;
        for(int open=1;open<=stations;open++)
        {
            totalhuman=totalhuman+arr[open];
            totalstation++;
            while(totalhuman>human)
            {
                totalhuman=totalhuman-arr[close];
                close++;
                totalstation--;
            }
            if(totalstation>ansstation)
            {
                ansstation=totalstation;
                anshuman=totalhuman;
            }
            else if(totalstation==ansstation)
            {
                anshuman=min(anshuman,totalhuman);
            }
        }
        printf("%d %d\n",anshuman,ansstation);
    }
   
}
