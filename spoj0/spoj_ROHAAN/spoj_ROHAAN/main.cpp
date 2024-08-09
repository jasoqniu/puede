//
//  main.cpp
//  spoj_ROHAAN
//
//  Created by Jason Qiu on 16/02/24.
//

#include <iostream>
using namespace std;
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int dimensi;
        scanf("%d",&dimensi);
        int arr[dimensi+5][dimensi+5];
        for(int b=1;b<=dimensi;b++)
        {
            for(int k=1;k<=dimensi;k++)
            {
                scanf("%d",&arr[b][k]);
            }
        }
        
        int jmlkota = dimensi;
        int asal;
        int tujuan;
        for(int trans = 1; trans <= jmlkota; trans++)
            {
                for(int asal = 1; asal <= jmlkota; asal++)
                {
                    for(int tujuan = 1; tujuan <= jmlkota; tujuan++)
                    {
                        arr[asal][tujuan] = min ( arr[asal][trans] + arr[trans][tujuan] ,   arr[asal][tujuan] );
                    }
                }
            }

        int query;
        scanf("%d",&query);
        int ans=0;
        for(int a=1;a<=query;a++)
        {
            
            scanf("%d",&asal);
            scanf("%d",&tujuan);
            ans = ans+arr[asal][tujuan];
        }
        
        printf("Case #%d: %d\n",t,ans);
    }
}
