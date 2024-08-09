//
//  main.cpp
//  spoj_2_printspiral
//
//  Created by Jason Qiu on 20/10/23.
//

#include <iostream>
#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    
    for(int tc=1; tc<=testcase; tc++)
    {
        int baris, kolom;
        scanf("%d %d", &baris, &kolom);
        
        int arr[baris+1][kolom+1];
        for(int b=1; b<=baris; b++)
        {
            for(int k=1; k<=kolom; k++)
            {
                arr[b][k] = 0;
            }
        }
        
        int atas=1, kiri=2, kanan=3, bawah=4;
        int arah = kanan, row=1, col=1;
        
        for(int angka=1; angka<=baris*kolom; angka++)
        {
            arr[row][col] = angka;
            if ( arah == kanan)
            {
                if ( col < kolom && arr[row][col+1] == 0 )
                    col ++;
                else
                {
                    row ++;
                    arah = bawah;
                }
            }
            else if ( arah == bawah)
            {
                if(row<baris&&arr[row+1][col]==0)
                    row++;
                else
                {
                    col--;
                    arah = kiri;
                }
            }
            else if ( arah == kiri)
            {
                if(col>1&&arr[row][col-1]==0)
                    col--;
                else
                {
                    row--;
                    arah = atas;
                }
            }
            else if ( arah == atas)
            {
                if(row>1&&arr[row-1][col]==0)
                    row--;
                else
                {
                    col++;
                    arah = kanan;
                }
            }
        }
        
        //print array 2 D disini
        printf("Case %d:\n", tc);
        int largest = baris * kolom;
        for(int b=1; b<=baris; b++)
        {
            for(int k=1; k<=kolom; k++)
            {
                //refactoring
                
                //#1. 0
                //If the largest number is more than 9, then print 0 before the number
                //if the number is less than 10 (see input examples for clarification).
                if(largest>9 && arr[b][k]<=9)
                    printf("0");
                        
                   printf("%d",arr[b][k]);
                   
                   //#2. spasi
                //There must be no trailing spaces at the end of printed lines, neither empty characters.
                if(k<kolom)
                    printf(" ");
            }
            printf("\n");
        }
    }

}
/*
#include <iostream>
#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    
    for(int tc=1; tc<=testcase; tc++)
    {
        int baris, kolom;
        scanf("%d %d", &baris, &kolom);
        
        int arr[baris+1][kolom+1];
        for(int b=1; b<=baris; b++)
        {
            for(int k=1; k<=kolom; k++)
            {
                arr[b][k] = 0;
            }
        }
        
        int atas=1, kiri=2, kanan=3, bawah=4;
        int arah = kanan, row=1, col=1;
        
        for(int angka=1; angka<=baris*kolom; angka++)
        {
            arr[row][col] = angka;
            if ( arah == kanan)
            {
                if ( col < kolom && arr[row][col+1] == 0 )
                    col ++;
                else
                {
                    row ++;
                    arah = bawah;
                }
            }
            else if ( arah == bawah)
            {
                if(row<baris&&arr[row+1][col]==0)
                    row++;
                else
                {
                    col--;
                    arah = kiri;
                }
            }
            else if ( arah == kiri)
            {
                if(col>1&&arr[row][col-1]==0)
                    col--;
                else
                {
                    row--;
                    arah = atas;
                }
            }
            else if ( arah == atas)
            {
                if(row>0&&arr[row-1][col]==0)
                    row++;
                else
                {
                    col++;
                    arah = kanan;
                }
            }
        }
        
        //print array 2 D disini
        printf("%d",arr[row][col]);
    }
    
}
*/
