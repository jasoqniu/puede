//
//  main.cpp
//  spoj19_ ADDREV
//
//  Created by Jason Qiu on 01/12/23.
//

#include <iostream>

int balik(int n)
{
    int reverse=0;
    while(n>0)
    {
        reverse = reverse*10 + n%10;
        n = n/10;
    }
    return reverse;
}

int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int tc=1;tc<=testcase;tc++)
    {
        int num1;
        int num2;
        scanf("%d",&num1);
        scanf("%d",&num2);
        int hasil;
        hasil = balik(num1)+balik(num2);
        hasil = balik(hasil);
        printf("%d\n",hasil);
    }
}
