//
//  main.cpp
//  tlx_faktorial-ganjilgenap
//
//  Created by Jason Qiu on 05/12/23.
//

#include <iostream>
int faktorial(int n)
{
    if(n==1)
        return 1;
    else if(n%2==0)
        return(n/2)*faktorial(n-1);
    else
        return(n)*faktorial(n-1);
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",faktorial(num));
}
