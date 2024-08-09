//
//  main.cpp
//  tlx_Permutasi Zig-Zag
//
//  Created by Jason Qiu on 18/01/24.
//


#include <iostream>
int n;
int memo[105];
bool pernah[105];
bool zigzag=true;
void permutasi(int kedalaman)
{
    if(kedalaman>n)
    {
        for(int i=2;i<=n-1;i++)
        {
            if((memo[i]<memo[i+1] && memo[i]<memo[i-1])||(memo[i]>memo[i+1] && memo[i]>memo[i-1]))
            {
                zigzag = true;
                continue;
            }
        
            else
            {
                zigzag=false;
                break;
            }
        }
        if(zigzag)
            for(int i=1;i<=n;i++)
            {
            printf("%d", memo[i]);
            }
        if(zigzag)
            printf("\n");
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(! pernah[i])
            {
                pernah[i] = true;
                memo[kedalaman] = i;
                permutasi(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}


int main()
{
    scanf("%d", &n);
    permutasi(1);
}
