//
//  main.cpp
//  csp3_binarysearch
//
//  Created by Jason Qiu on 22/01/24.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
/*
int main()
{
    printf("Batas = ");
    int batas;
    scanf("%d",&batas);
    int arr[batas+1];
    srand(time(NULL));
    
    for(int a=1;a<=batas;a++)
    {
        arr[a]=rand() % 100 + 1;
    }
    for(int a=1;a<=batas;a++)
    {
        printf("%d ",arr[a]);
    }
    
    printf("\n");
    
    
    for(int a=1; a<=batas; a++)
    {
        for(int j=1; j<= batas-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Setelah di sort menjadi:\n");
    for(int a=1;a<=batas;a++)
    {
        printf("%d ",arr[a]);
    }
    printf("\n");

    printf("Data dicari: ");
    
    int cari ;
    scanf("%d", &cari);
    
    
    int kiri = 1;
    int kanan = batas;
    
    bool ketemu = false;
    int answer = -1;
    while (kiri <= kanan)
    {
        int tengah = (kiri + kanan) / 2;

        if( arr[tengah] == cari)
        {
            answer = tengah;
            ketemu = true;
            
            //keep search to right
            kiri = tengah + 1;
        }
        

        else if (arr[tengah] < cari)
            kiri = tengah + 1;
            

        else
            kanan = tengah - 1;
        
    }
    
    if(ketemu == false)
        printf("tidak ketemu \n!");
    else
        printf("Ketemu di posisi %d\n",answer);
}
*/

int main()
{
    int n=5;
    int arr[n=1];
    int arr[1]=5;
    int arr[2]=4;
    int arr[3]=3;
    int arr[4]=2;
    int arr[5]=1;
    
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<n-1;b++)
            if(arr[b]>arr[b+1])
        {
            int temp = arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=temp
        }
    }
    
    for(int a=1;a<=n;a++)
    {
        printf("%d",arr[a]);
    }
}

