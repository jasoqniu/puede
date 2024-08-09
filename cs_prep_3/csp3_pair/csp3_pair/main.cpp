//
//  main.cpp
//  csp3_pair
//
//  Created by Jason Qiu on 26/01/24.
//
#include <iostream>
#include <cstring>
#include <utility>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int baris=rand()%5+3;
    int kolom=rand()%5+3;
    printf("Baris = %d\n",baris);
    printf("Kolom = %d\n",kolom);
    
    pair<int,int>coord[21][50];
    int memo[25];
    memset(memo,0,sizeof(memo));
    int arr[baris][kolom];
    for(int b=1;b<=baris;b++)
    {
        for(int k=1;k<=kolom;k++)
        {
            int numrand = rand()%20+1;
            arr[b][k] = numrand;
            memo[numrand]++;
            printf("%d  ",arr[b][k]);
            
            coord[numrand][memo[numrand]].first=baris;
            coord[numrand][memo[numrand]].second=kolom;
        }
        printf("\n");
        
        for(int b=1;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                int num = arr[b][k];
                if (memo[num]>1)
                {
                    printf("%d : %dx ",num,memo[num]);
                    for(int a=1;a<=memo[arr[b][k]];a++)
                    {
                        int x = coord[num][a].first;
                        int y = coord[num][a].second;
                        printf("(%d,%d)",x,y);
                    }
                    printf("\n");
                    memo[num]=0;
                }
            }
        }
    }
}
