//
//  main.cpp
//  spoj11_chessboard
//
//  Created by Jason Qiu on 06/11/23.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm> //abs min max
using namespace std;
int main()
{
    int line;
    scanf("%d",&line);
    int b=line;
    int k=line;
    int board[b+1][k+1];
    for(int baris=1;baris<=b;baris++)
    {
        for(int kolom=1;kolom<=k;kolom++)
        {
            scanf("%d",&board[baris][kolom]);
        }
    }
    int q;
    scanf("%d",&q);

    
    int num1;
    int num2;
    int num3;
    int num4;
    for(int a=1;a<=q;a++)
    {
        scanf("%d",&num1);
        scanf("%d",&num2);
        scanf("%d",&num3);
        scanf("%d",&num4);
        
        int ans=0, hitam=0, putih=0;
        for(int baris=num1;baris<=num3;baris++)
        {
            for(int kolom=num2;kolom<=num4;kolom++)
            {
                if(  (baris+kolom) %2 != 0)
                    hitam = hitam + board[baris][kolom];
                else
                    putih = putih + board[baris][kolom];
            }
        }
        ans=hitam-putih;
        printf("%d\n", abs(ans));
    }
}
