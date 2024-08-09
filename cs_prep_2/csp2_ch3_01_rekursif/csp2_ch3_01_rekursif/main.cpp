//
//  main.cpp
//  csp2_ch3_01_rekursif
//
//  Created by Jason Qiu on 04/12/23.
//

#include <stdio.h>
int batas;
void cetak(int x)
{
    if(x==batas+1)
        return;
    printf("%d ",x);
    cetak(x+1);
    printf("%d ",x);

}


int main()
{
    printf("Batas = ");
    scanf("%d",&batas);
    cetak(1);
}
