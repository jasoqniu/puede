//
//  main.cpp
//  csp3_map
//
//  Created by Jason Qiu on 25/02/24.
//

#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <string.h>
#include <cstring>
#include <math.h>
using namespace std;
bool prime(int x)
{
    if(x<2)
        return false;
    
    for(int a=2;a<=sqrt(x);a++)
    {
        if(x%a==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    map<string,int> peta_int;
    map<int,string> peta_string;
    int index=1;
    for(int a=0;a<n;a++)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        
        if (peta_int.count(s1) == 0)
        {
            peta_int[s1]=index;
            peta_string[index]=s1;
            index++;
        }
        if (peta_int.count(s2) == 0)
        {
            peta_int[s2]=index;
            peta_string[index]=s2;
            index++;
        }
        
    }
    int planets = index-1;
    int middle = (planets+1)/2;
    cout << peta_string[middle];
    cout << " - ";
    if(prime(middle))
        cout << peta_string[planets];
    else
        cout << peta_string[1];
    cout << "\n";
}
