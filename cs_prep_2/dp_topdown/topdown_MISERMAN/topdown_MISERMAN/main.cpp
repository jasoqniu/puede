//
//  main.cpp
//  topdown_MISERMAN
//
//  Created by Jason Qiu on 11/12/23.
//

#include <iostream>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<utility>
using namespace std;
int isi[105][105],n,m,memo[105][105];
int add(int row,int col)
{
    if(row>n-1)
        return 0;
    else if(memo[row][col]!=-1)
        return memo[row][col];
    else if (col==0)
        return memo[row][col] = isi[row][col] + min(add(row+1,col+1),add(row+1,col));
    else if (col==m-1)
        return memo[row][col] = isi[row][col] + min(add(row+1,col-1),add(row+1,col));
    else
        return memo[row][col] = isi[row][col] + min(add(row+1,col+1),min(add(row+1,col),add(row+1,col-1)));
}

int main()
{
    int hasil[105];
    memset(memo,-1,sizeof(memo));
    scanf("%d%d",&n,&m);
    for(int baris=0;baris<n;baris++)
    {
        for(int kolom=0;kolom<m;kolom++)
        {
            scanf("%d",&isi[baris][kolom]);
        }
    }
    for(int kolom=0;kolom<m;kolom++)
        hasil[kolom]=add(0,kolom);
    int sebelum = hasil[0];
    for(int kolom=1;kolom<m;kolom++)
        sebelum = min(sebelum,hasil[kolom]);
    printf("%d\n",sebelum);
}
