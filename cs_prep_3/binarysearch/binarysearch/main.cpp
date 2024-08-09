//
//  main.cpp
//  binarysearch
//
//  Created by Jason Qiu on 22/01/24.
//

#include <iostream>
//include 1x = include semua kecuali <conio.h>

using namespace std;

int main()
{
    printf("Masukan batas = ");
    int batas;
    scanf("%d", &batas);
    
    srand(time(NULL));
    int arr[batas+5];
    for(int a =1; a<=batas; a++)
    {
        arr[a] = rand() % 50 + 1;
//        rand()     % 20           + 1
//        min 0.00   x 20 = 0.00    + 1 = 1
//        max 0.99   x 20 = 19.xx   + 1 = 20.xx
    }
    
    //BUBBLE SORT ALGORITHM
    /*
    for(int i=1; i<=batas; i++)
    for(int j = 1; j<batas; j++)
    {
        if( arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    */
    
    //Sort dari C = Quick Sort Algorithm
    //(Standard Library / STL)
    //sort(arr, arr+batas); //array mulai 0
    sort(arr+1, arr+batas+1); //array mulai 1
    
    
    for(int a=1; a<=batas; a++)
        printf("%d ", arr[a]);
        
    
    //BINARY SEARCH ALGORITHM
    printf("\nData yang dicari = ");
    int cari ;
    scanf("%d", &cari);
    
    
    int kiri = 1;
    int kanan = batas;
    
    bool ketemu = false;
    while (kiri <= kanan)
    {
        int tengah = (kiri + kanan) / 2;
        
        //1. apakah sama
        if( arr[tengah] == cari)
        {
            ketemu = true;
            break;
        }
        
        //2. apakah <
        else if (arr[tengah] < cari)
            kiri = tengah + 1;
            
        //3. apakah >
        else
            kanan = tengah - 1;
        
    }
    
    if(ketemu == false)
        printf("tidak ketemu !");
    else
        printf("Ketemu!");
}
