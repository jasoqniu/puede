//
//  main.cpp
//  spoj17_dojo
//
//  Created by Jason Qiu on 20/11/23.
//

#include <iostream>
#include <string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int testcase=1;testcase<=tc;testcase++)
    {
        int n, i;
        char m[2005], j[2005];
        scanf("%d %s %d %s",&n, &m, &i, &j);
        
        int pm = strlen(m)-1;
        int pj = strlen(j)-1;
        
        int luas = n * m[pm];
        if(luas%2 !=0 && i%2==j[pj]%2)
        {
            printf("Possible.\n");
        }
        else
            printf("Impossible.\n");
    }
}
