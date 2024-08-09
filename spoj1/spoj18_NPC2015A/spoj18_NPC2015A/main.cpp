//
//  main.cpp
//  spoj18_NPC2015A
//
//  Created by Jason Qiu on 20/11/23.
//

#include <iostream>
#include <string.h>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    char s[1000005];
    scanf("%s",&s);
    int panjang = strlen(s);
    
    int memoawal[26+5];
    memset(memoawal,-1,sizeof(memoawal));
   
    int memoakhir[26+5];
    memset(memoakhir,-1,sizeof(memoakhir));
    
    for(int a=0;a<panjang;a++)
    {
        if(memoawal[s[a]-64]==-1)
        {
            memoawal[s[a]-64]=a;
        }
        memoakhir[s[a]-64]=a;
    }
    
    int q;
    scanf("%d",&q);
    for(int a=1;a<=q;a++)
    {
        char char1;
        scanf(" %c",&char1);
        char char2;
        scanf(" %c",&char2);
        
        int first=char1-64;
        int sec=char2-64;
        
        bool ya=false;
        
        if(memoawal[first]<memoakhir[sec]&&memoawal[first]!=-1&&memoakhir[sec]!=-1)
            ya=true;

            
        
        if(ya==true)
        {
            printf("YA\n");
        }
        else
        {
            printf("TIDAK\n");
        }
            
        
    }
}
