//
//  main.cpp
//  tlx_konversi_biner
//
//  Created by Jason Qiu on 08/12/23.
//
#include <iostream>
void biner(int N)
{
    if(N==0)
        return;
    biner(N/2);
    printf("%d",N%2);
}

int main()
{
    int n;
    scanf("%d",&n);
    biner(n);
    printf("\n");
}
