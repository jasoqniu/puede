//
//  main.cpp
//  csp3_kamus
//
//  Created by Jason Qiu on 25/02/24.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string,string>kamus;
    string kata;
    while(true)
    {
        printf("Masukkan kata dalam bahasa Indonesia : ");
        cin>>kata;
        
        if(kata=="Keluar")
            break;
        
        if(kamus.count(kata)==0)
        {
            cout <<"Kata "<<kata<<" tidak diketemukan";
            printf("\n");
            
            char y_or_t;
            printf("Apakah ingin menambahkan ke dalam kamus (y / t)?\n");
            cin>>y_or_t;
            
            if(y_or_t=='y')
            {
                string translated;
                cout<<"Masukkan bahasa Inggris dari "<<kata<<" : ";
                cin>> translated;
                printf("Data berhasil tersimpan !\n");
                kamus[kata]=translated;
            }
        }
        else
        {
            string translated;
            translated=kamus[kata];
            cout<<"Dalam bahasa inggris : "<<translated<<"\n";
        }
    }
}
