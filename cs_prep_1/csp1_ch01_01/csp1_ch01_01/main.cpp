//
//  main.cpp
//  csp1_ch01_01
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
    
    int catatan[21];
    for(int a=0;a<21;a++)
        catatan[a]=0;
    
    int arr[baris][kolom];
    for(int b=0;b<baris;b++)
    {
        for(int k=0;k<kolom;k++)
        {
            int acak=rand()%20+1;
            arr[b][k]=acak;
            printf("%d ",arr[b][k]);
            
            catatan[acak]++;
        }
        printf("\n");
        
    }
    
    printf("\nKembar : \n");
    for(int b=0;b<baris;b++)
    {
        for(int k=0;k<kolom;k++)
        {
            int angka=arr[b][k];
            if(catatan[angka]>1)
            {
                printf("%d : %dx\n",angka,catatan[angka]);
            }
        }
    }
}
