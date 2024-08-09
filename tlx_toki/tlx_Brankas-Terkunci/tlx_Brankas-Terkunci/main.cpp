//
//  main.cpp
//  tlx_Brankas-Terkunci
//
//  Created by Jason Qiu on 23/01/24.
//

#include <iostream>
int n;
int k;
int memo[105];
bool pernah[105];
void combi(int kedalaman)
{
    if(kedalaman>=n)
    {
        for(int a=1;a<=n;a++)
            printf("%d",memo[a]);
        printf("\n");
    }
    else
    {
        
    }
}
int main()
{
    scanf("%d",&n);
}
