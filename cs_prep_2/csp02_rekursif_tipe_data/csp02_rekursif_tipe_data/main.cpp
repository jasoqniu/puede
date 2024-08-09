//
//  main.cpp
//  csp02_rekursif_tipe_data
//
//  Created by Jason Qiu on 04/12/23.
//

#include <iostream>
int faktorial(int x)
{
    if(x==0)
        return 1;
    else
        return x * faktorial(x-1);
}


int main()
{
    int batas;
    printf("Batas = ");
    scanf("%d",&batas);
    printf("%d! = %d",batas,faktorial(batas));
}
