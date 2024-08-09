//
//  main.cpp
//  spoj_BSEARCH1
//
//  Created by Jason Qiu on 25/01/24.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int q;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&q);
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }
    
    for(int a=0;a<q;a++)
    {
        int cari;
        scanf("%d",&cari);
        
        int kiri=0;
        int kanan=n-1;
        bool ketemu=false;
        int ans=-1;
        
        while(kiri<=kanan)
        {
            int tengah = (kiri+kanan)/2;
            if(arr[tengah]==cari)
            {
                if(arr[tengah-1]==cari)
                    kanan=tengah-1;
                else
                {
                    ans=tengah;
                    ketemu=true;
                    break;
                }
            }
            else if(arr[tengah]<cari)
                kiri=tengah + 1;
            else
                kanan=tengah-1;
        }
        if(ketemu==true)
            printf("%d\n",ans);
        else
            printf("-1\n");
    }
    
}
