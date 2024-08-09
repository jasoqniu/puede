//
//  main.cpp
//  ohmydays
//
//  Created by Jason Qiu on 16/10/23.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int baris = rand()%5 + 3;
    int kolom = rand()%5 + 3;
    printf("Baris = %d\n",baris);
    printf("Kolom = %d\n",kolom);
    
    int arr[baris][kolom];
    
    printf("\nAwal: \n");
    for(int b=0;b<baris;b++)
    {
        for(int k=0;k<kolom;k++)
        {
            int acak=rand()%20+1;
            arr[b][k]=acak;
            printf("%d ",arr[b][k]);
        }
        printf("\n");
    }
    
    
    printf("\nReverse Horizontal: \n");
    for(int b=0;b<baris;b++)
    {
        for(int k=kolom-1;k>=0;k--)
        {
            printf("%d ",arr[b][k]);
        }
        printf("\n");
    }
    
    printf("\nReverse Vertikal: \n");
    for(int b=baris-1;b>=0;b--)
    {
        for(int k=0;k<kolom;k++)
        {
            printf("%d ",arr[b][k]);
        }
        printf("\n");
    }
    
    
}
