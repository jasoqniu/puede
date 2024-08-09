//
//  main.cpp
//  topdown_ WPC4F
//
//  Created by Jason Qiu on 11/12/23.
//

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<utility>
using namespace std;
int isi[25][3],n,m=3,memo[25][3];
int add(int row, int col)
{
    if(row>n-1)
        return 0;
    else if(memo[row][col]!=-1)
        return memo[row][col];
    else if(col==0)
        return memo[row][col] = isi[row][col] + min(add(row+1,col+1),add(row+1,col+2));
    else if(col==m-1)
        return memo[row][col] = isi[row][col] + min(add(row+1,col-1),add(row+1,col-2));
    else
        return memo[row][col] = isi[row][col] + min(add(row+1,col+1),add(row+1,col-1));
}
int main()
{
    int hasil[25];
    int tc;
    scanf("%d",&tc);
    for(int testcase=1;testcase<=tc;testcase++)
    {
        memset(memo,-1,sizeof(memo));
        scanf("%d",&n);
        for(int b=0;b<n;b++)
            for(int k=0;k<m;k++)
                scanf("%d",&isi[b][k]);
        
        for(int k=0;k<m;k++)
            hasil[k]=add(0,k);
        
        int sebelum=hasil[0];
        for(int k=1;k<m;k++)
            sebelum = min(sebelum,hasil[k]);
        printf("%d\n",sebelum);
    }
}
