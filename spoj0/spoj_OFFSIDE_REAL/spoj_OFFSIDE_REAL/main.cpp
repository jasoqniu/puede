//
//  main.cpp
//  spoj_OFFSIDE_REAL
//
//  Created by Jason Qiu on 22/01/24.
//

#include <iostream>

int main()
{
    while(true)
    {
        int A;
        int D;
        scanf("%d",&A);
        scanf("%d",&D);
        int arrA[A+1];
        int arrD[D+1];
        if(A==0&&D==0)
        {
            break;
        }
        else
        {
            for(int a=1;a<=A;a++)
            {
                scanf("%d",&arrA[a]);
            }
            for(int a=1;a<=D;a++)
            {
                scanf("%d",&arrD[a]);
            }
            
            for(int a=1; a<=D; a++){
                for(int j=1; j<=D-1; j++)
                {
                    if( arrD[j] > arrD[j+1])
                    {
                        int tempD = arrD[j];
                        arrD[j] = arrD[j+1];
                        arrD[j+1] = tempD;
                    }
                }
                for(int a=1; a<=A; a++){
                    for(int j=1; j<=A-1; j++)
                    {
                        if( arrA[j] > arrA[j+1])
                        {
                            int tempA = arrA[j];
                            arrA[j] = arrA[j+1];
                            arrA[j+1] = tempA;
                        }
                    }
                }
            }
            if(arrA[1] < arrD[2])
                printf("Y\n");
            else
                printf("N\n");
        }
    }
}
