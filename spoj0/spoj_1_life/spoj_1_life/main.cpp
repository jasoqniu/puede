//
//  main.cpp
//  spoj_1_life
//
//  Created by Jason Qiu on 20/10/23.
//

#include <iostream>
#include <stdio.h>
int main()
{
    int input;
    int life=42;
    while(true)
    {
        scanf("%d",&input);
        
        if(input==life)
        {
            break;
        }
        printf("%d\n",input);
    }
    
}
