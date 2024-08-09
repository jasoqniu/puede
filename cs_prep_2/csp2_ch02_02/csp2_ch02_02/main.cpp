//
//  main.cpp
//  csp2_ch02_02
//
//  Created by Jason Qiu on 01/12/23.
//
/*
 *) int main HARUS SAMA (tidak boleh diubah)
 *) tulis function agar program diatas dapat berjalan dengan baik



 2. Deret Bilangan Prima
 Batas = 5 (enter)
 2 + 3 + 5 + 7 + 11 = 28

 note:
 -----
 *) harus menggunakan function isPrime yang sudah dikerjakan di nomor sebelumnya.
 *) isi dari int main() boleh diubah sesuai permintaan soal

 */
#include <iostream>

int isPrime(int n)
{
    if(n==0||n==1)
        return false;
    
    for(int a=2;a<=sqrt(n);a++)
    {
        if(n%a==0)
            return false;
    }
    return true;
}

int main()
{
    int catatan=0;
    int batas;
    int num=0;
    int jumlah=0;
    printf("Batas = ");
    scanf("%d",&batas);
    while(catatan<batas)
    {
        if(isPrime(num))
        {
            printf("%d",num);
            if(catatan<batas-1)
                printf(" + ");
            else
                printf(" = ");
            jumlah = jumlah + num;
            catatan++;
        }
        num++;
    }
    printf("%d\n",jumlah);
}
