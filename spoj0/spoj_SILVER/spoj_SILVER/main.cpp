//
//  main.cpp
//  spoj_SILVER
//
//  Created by Jason Qiu on 25/12/23.
//

#include <iostream>

int main()
{
    while(true)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        int cut = 0;
        while(n>1)
        {
            n = n/2;
            cut++;
        }
        printf("%d\n",cut);
    }
}
