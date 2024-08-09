//
//  main.cpp
//  csp1_ch1_test
//
//  Created by Jason Qiu on 16/10/23.
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int arr[3][2]; //baris, kolom
    srand(time(NULL));
    for(int b=0; b<=2; b++)
    {
        for(int k=0; k<=1; k++)
        {
            int acak = rand()%10 + 1;
            arr[b][k] = acak;
            printf("%d ", arr[b][k]);
        }
        printf("\n");
    }
}
