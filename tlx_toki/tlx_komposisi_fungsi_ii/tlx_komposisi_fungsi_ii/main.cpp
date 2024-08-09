//
//  main.cpp
//  tlx_komposisi_fungsi_ii
//
//  Created by Jason Qiu on 06/12/23.
//

#include <iostream>
int A;
int B;

int f(int x,int K)
{
    if(K==0)
        return x;
    
    else
    {
        return abs(A*f(x,K-1)+B);
    }
}

int main()
{
    int x;
    int K;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&K);
    scanf("%d",&x);
    printf("%d\n",f(x,K));
}
