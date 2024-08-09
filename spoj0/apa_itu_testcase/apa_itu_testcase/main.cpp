//
//  main.cpp
//  apa_itu_testcase
//
//  Created by Jason Qiu on 20/10/23.
//
#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
   
    for(int tc=1; tc<=testcase; tc++)
    {
        int bil;
        scanf("%d", &bil);
       
        if ( bil % 2 == 0)
            printf("Genap\n");
        else
            printf("Ganjil\n");
    }
}
