//
//  main.cpp
//  spoj3_printmove
//
//  Created by Jason Qiu on 23/10/23.
//
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    int baris,kolom;
    scanf("%d %d",&baris,&kolom);
    
    int num=1;
    int largest=baris*kolom;
    int arr[baris+1][kolom+1];
    for(int b=1;b<=baris;b++)
    {
        for(int k=1;k<=kolom;k++)
        {
            arr[b][k]=num++;
        }
    }
    
    for(int b=1;b<=baris;b++)
    {
        for(int k=1;k<=kolom;k++)
        {
            int bil = arr[b][k];
            if(largest>999 && bil < 1000) //largest 4 digit, bil 3 digit
                printf("0");
            if(largest>99 && bil < 100) //largest 3 digit, bil 2 digit
                printf("0");
            if(largest>9 && bil < 10) //largest 2 digit, bil 1 digit
                printf("0");
                
            printf("%d",arr[b][k]);
            if(k<kolom)
                printf(" ");
        }
        printf("\n");
    }
    
    int testcase;
    scanf("%d", &testcase);
    for(int tc=1 ; tc<=testcase; tc++)
    {
        string perintah;
        cin >> perintah;
        if ( perintah == "up")
        {
            int temp[kolom+1]    ;
            
            //1. move first row to temp ( 1x for )
            for(int k=1;k<=kolom;k++)
                temp[k] = arr[1][k];
            
            //2. move up 2nd row till end ( for dalam for )
            for(int b=2;b<=baris;b++)
            {
                for(int k=1;k<=kolom;k++)
                {
                    arr[b-1][k] = arr[b][k];
                }
            }
            
            //3. move back from temp to last row ( 1x for)
            for(int k=1;k<=kolom;k++)
                arr[baris][k] = temp[k] ;
        }
        else if ( perintah == "down")
        {
            int temp[kolom+1];
            
            for(int k=1;k<=kolom;k++)
                temp[k]=arr[baris][k];
            
            for(int b=baris-1;b>=1;b--)
            {
                for(int k=1;k<=kolom;k++)
                {
                    arr[b+1][k] = arr[b][k];
                }
            }
            
            for(int k=1;k<=kolom;k++)
                arr[1][k] = temp[k] ;
        }
        
        else if ( perintah == "left")
        {
            int temp[baris+1];
            
            for(int b=1;b<=baris;b++)
                temp[b]=arr[b][1];
            
            for(int b=1;b<=baris;b++)
            {
                for(int k=1;k<kolom;k++)
                {
                    arr[b][k]=arr[b][k+1];
                }
            }
            for(int b=1;b<=baris;b++)
            {
                arr[b][kolom]=temp[b];
            }
            
        }
        else if ( perintah == "right")
        {
            int temp[baris+1];
            
            for(int b=1;b<=baris;b++)
            {
                temp[b]=arr[b][kolom];
            }
            
            for(int b=1;b<=baris;b++)
            {
                for(int k=kolom-1;k>=1;k--)
                {
                    arr[b][k+1]=arr[b][k];
                }
            }
            for(int b=1;b<=baris;b++)
            {
                arr[b][1]=temp[b];
            }
        }
         
        printf("Command #%d:\n",tc);
        //put your code here (print array after move)
        for(int b=1;b<=baris;b++)
        {
            for(int k=1;k<=kolom;k++)
            {
                int bil = arr[b][k];
                if(largest>999 && bil < 1000) //largest 4 digit, bil 3 digit
                    printf("0");
                if(largest>99 && bil < 100) //largest 3 digit, bil 2 digit
                    printf("0");
                if(largest>9 && bil < 10) //largest 2 digit, bil 1 digit
                    printf("0");
                    
                printf("%d",arr[b][k]);
                if(k<kolom)
                    printf(" ");
            }
            printf("\n");
        }
        
    }
    
}
