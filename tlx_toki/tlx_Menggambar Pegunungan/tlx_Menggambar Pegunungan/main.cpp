//
//  main.cpp
//  tlx_Menggambar Pegunungan
//
//  Created by Jason Qiu on 18/01/24.
//

#include <iostream>
void gambar(int n)
{
    if(n==1)
        printf("*");
    else
    {
        gambar(n-1);
        printf("\n");
        for(int a=1;a<=n;a++)
        {
            printf("*");
        }
        printf("\n");
        gambar(n-1);
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    gambar(n);
}
