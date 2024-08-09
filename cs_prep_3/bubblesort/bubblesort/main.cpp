//
//  main.cpp
//  bubblesort
//
//  Created by Jason Qiu on 22/01/24.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5;
    int arr[n+1];
    arr[1]=5;
    arr[2]=4;
    arr[3]=3;
    arr[4]=2;
    arr[5]=1;
    
    
    printf("Before:\n");
    for(int a=1; a<=n; a++)
    {
        printf("%d ", arr[a]);
    }
    printf("\n");
    
    //bubble sort
    for(int a=1; a<=n; a++)
    {
        for(int j=1; j<=n-1; j++)
            if( arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    }
    
    printf("After\n");
    for(int a=1; a<=n; a++)
        printf("%d ", arr[a]);
    printf("\n");
}
