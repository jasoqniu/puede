//
//  main.cpp
//  topdown_BYTESM2
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
int add(int row, int col)
{
    if(row>n-1)
        return 0;
    else if(memo[row][col]!=-1)
        return memo[row][col];
    else if(col==0)
        return memo[row][col] = isi[row][col] + max(add(row+1,col+1),add(row+1,col));
    else if(col==m-1)
        return memo[row][col] = isi[row][col] + max(add(row+1,col-1),add(row+1,col-1));
    else
        return
}
int main()
{
    
}
