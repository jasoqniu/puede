//
//  main.cpp
//  spoj_ OVISLARSUM_again
//
//  Created by Jason Qiu on 22/12/23.
//

#include <iostream>
#define LL long long
LL MOD = 1000000007;
LL l,r,mod;

LL fastexp ( LL base, LL pangkat)
{
    if(pangkat==0)
        return 1;
    if(pangkat == 1)
        return base%MOD;
    else
    {
        LL hasil = fastexp ( base, pangkat / 2);
        hasil = (hasil%MOD * hasil%MOD);

        if (pangkat % 2 !=0)
            hasil = (hasil%MOD * base%MOD);
        return hasil%MOD;
    }
}

LL modkurang(LL a, LL b)
{
    a = a%MOD;
    b = b%MOD;
    LL temp = (a-b)%MOD;
    if(temp<0)
        temp = (temp+MOD)%MOD;
    return temp;
}

LL hitung(LL num)
{
    LL inverse = fastexp(2,MOD-2)%MOD;
    LL satuputaran_pembilang = (mod%MOD * modkurang(mod,1)%MOD);
    LL satuputaran = (satuputaran_pembilang * inverse)%MOD;
    LL jumlahputaran = num/mod;
    LL sisaangka = num%mod;
    LL pembilang = (sisaangka%MOD * (sisaangka%MOD+1))%MOD;
    LL rumderet_sisaangka = (pembilang*inverse)%MOD;
    return((satuputaran * jumlahputaran%MOD)+rumderet_sisaangka)%MOD;
}
int main()
{
    scanf("%lld",&l);
    scanf("%lld",&r);
    scanf("%lld",&mod);
    LL totall = hitung(l-1);
    LL totalr = hitung(r);
    printf("%lld\n",modkurang(totalr,totall));
    
}
