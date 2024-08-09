//
//  main.cpp
//  csp1_01_03
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
    
    int catatan[21];
    for(int a=0;a<21;a++)
        catatan[a]=0;
    
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
    printf("\nGenap: ");
    for(int b=0;b<baris;b++)
    {
        for(int k=0;k<kolom;k++)
        {
            int value=arr[b][k];
            if (value%2==0&&catatan[value]==0)
            {
                printf("%d ",value);
                catatan[value]++;
            }
        }
    }
    
    printf("\nGanjil: ");
    for(int b=0;b<baris;b++)
    {
        for(int k=0;k<kolom;k++)
        {
            int value=arr[b][k];
            if (value%2==1&&catatan[value]==0)
            {
                printf("%d ",value);
                catatan[value]++;
            }
        }
    }
}
