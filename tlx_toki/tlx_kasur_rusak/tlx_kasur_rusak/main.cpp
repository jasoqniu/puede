//
//  main.cpp
//  tlx_kasur_rusak
//
//  Created by Jason Qiu on 06/12/23.
//

#include <iostream>
#include <cstring>
#include <string.h>
char kata[105];
int panjang;
bool palindrom(int x)
{
    if(x==panjang/2)
        return true;
    else if(kata[x]!=kata[panjang-x-1])
        return false;
    else
        return palindrom(x+1);
}

int main()
{
    scanf("%s",&kata);
    panjang=strlen(kata);
    if(palindrom(0))
        printf("YA\n");
    else
        printf("BUKAN\n");
}
