//
//  main.cpp
//  spoj_PRIME1
//
//  Created by Jason Qiu on 22/12/23.
//

#include <iostream>
#include <math.h>
int prime(int n)
{
    if(n==0||n==1)
        return false;
    if(n%2==0&&n!=2)
        return false;
    for(int a=3;a<=sqrt(n);a+=2)
    {
        if(n%a==0)
            return false;
    }
    return true;
}
void printprime(int low, int up)
{
    for(int a=low;a<=up;a++)
    {
        if(prime(a))
            printf("%d\n",a);
    }
}
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int m;
        int n;
        scanf("%d",&m);
        scanf("%d",&n);
        printprime(m,n);
    }
}
