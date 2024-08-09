//
//  main.cpp
//  spoj_ OVISLARSUM
//
//  Created by Jason Qiu on 15/12/23.
//

#include <iostream>
long long m;
long long MOD = 1000000007;

long long rumderet(long long n)
{
    return ((n*(n+1))/2)%MOD;
}

long long mod_kurang(long long a, long long b)
{
    a = a%MOD;
    b = b%MOD;
    long long temp = (a-b)%MOD;
    if(temp<0)
        temp = (temp + MOD)%MOD;
    return temp;
}

long long fastexp ( int base, int pangkat)
{
    if(pangkat == 1)
        return base;
    else
    {
        long long hasil = fastexp ( base, pangkat / 2);
        hasil = hasil * hasil;

        if (pangkat % 2 !=0)
            hasil = hasil * base;
        return hasil;
    }
}


long long hitung(long long num)
{
    if(m==0)
        return 0;
    if(num==0)
        return 0;
    else
    {
        long long satuputaran = rumderet(m-1)%MOD;
        long long jumlahputaran = (num/m)%MOD;
        long long sisaangka = (num%m)%MOD;
        long long rumderetsisaangka = rumderet(sisaangka%MOD);
        long long ans = ((satuputaran * jumlahputaran)%MOD + rumderetsisaangka)%MOD;
        return ans;
    }
}

int main()
{
    long long L;
    long long R;
    long long m;
    scanf("%lld",&L);
    scanf("%lld",&R);
    scanf("%lld",&m);
    long long ansL = hitung(L);
    long long ansR = hitung(R);
    printf("%lld",mod_kurang(ansR,ansL));
}
