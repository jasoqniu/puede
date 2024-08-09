//
//  main.cpp
//  parparpartytyty
//
//  Created by Jason Qiu on 17/11/23.
//

#include<stdio.h>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
    int partybudget, parties;
    while(true)
    {
        scanf("%d %d", &partybudget, &parties);
        if (partybudget == 0 && parties == 0)
            break;
        int fee[parties + 1];
        int fun[parties + 1];
        
        for(int amo = 1; amo<=parties; amo++)
        {
            scanf("%d %d", &fee[amo], &fun[amo]);
            
        }
        
        int memo[parties + 1][partybudget + 1];
        memset(memo, 0, sizeof(memo));
        
        int totalfun = 0, ansfun = 0;
        int totalcost = 0, anscost = 0;
        for(int b = 1; b<=parties; b++)
        {
            for(int k = 1; k<=partybudget; k++)
            {
                if(k < fee[b])
                    memo[b][k] = memo[b-1][k];
                else
                {
                    int skip = memo[b-1][k];
                    int sisauang = k - fee[b];
                    int beli = fun[b] + memo[b-1][sisauang];
                    
                    memo[b][k] = max(skip,beli);
                }
                
                totalfun = memo[b][k];
                totalcost = k;
                
                //1. suka party, if totalfun > ansfun, update semua answer
                if (totalfun > ansfun)
                {
                    ansfun = totalfun;
                    anscost = totalcost;
                }
                
                //2. if totalfun == ansfun, cari minimal cost
                else if ( totalfun == ansfun)
                    anscost = min(anscost, totalcost);
            }
        }
        
        printf("%d %d\n", anscost, ansfun);
    }
}
