//
//  main.cpp
//  spoj13_party
//
//  Created by Jason Qiu on 13/11/23.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    while(true)
    {
        int budget;
        int parties;
        scanf("%d",&budget);
        scanf("%d",&parties);
        
        if(budget==0&&parties==0)
            break;
        
        int money[parties+5];
        int fun[parties+5];
        
        for(int a=1;a<=parties;a++)
        {
            scanf("%d",&money[a]);
            scanf("%d",&fun[a]);
        }
        
        int memo[parties+1][budget+1];
        memset(memo,0,sizeof(memo));
        
        int totalmoney=0;
        int ansmoney=0;
        int totalfun=0;
        int ansfun=0;

        
        for(int baris=1;baris<=parties;baris++)
        {
            for(int kolom=0;kolom<=budget;kolom++)
            {
                if(money[baris]>kolom)
                {
                    memo[baris][kolom]=memo[baris-1][kolom];
                }
                else
                {
                    int skip = memo[baris-1][kolom];
                    int sisauang = kolom-money[baris];
                    int beli = fun[baris]+memo[baris-1][sisauang];
                    memo[baris][kolom]=max(skip,beli);
                    
                }
                totalfun = memo[baris][kolom];
                totalmoney=kolom;
                if(totalfun>ansfun)
                {
                    ansfun=totalfun;
                    ansmoney=totalmoney;
                }
                else if(totalfun==ansfun)
                    ansmoney=min(ansmoney,totalmoney);
            }
        }
        printf("%d\n",ansmoney);
        printf("%d\n",ansfun);
    }
    
}
