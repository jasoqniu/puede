//
//  main.cpp
//  spoj_haduhhhh
//
//  Created by Jason Qiu on 18/01/24.
//

#include <iostream>
#include <stdlib.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    
    for (int tc = 1; tc <= testcase; tc++) {
        int n;
        scanf("%d", &n);
        
        int arr1[n + 1];
        int arr2[n + 1];
        
        for (int a = 1; a <= n; a++) {
            scanf("%d", &arr1[a]);
        }
        
        for (int a = 1; a <= n; a++) {
            scanf("%d", &arr2[a]);
        }
        
        int memo[n + 1];
        memo[1] = arr2[1] - arr1[1]; // Initialize memo[1] correctly
        
        for (int a = 2; a <= n; a++) {
            memo[a] = arr2[a] - arr1[a];
        }
        
        int ans[n + 1];
        ans[1] = memo[1];
        
        for (int a = 2; a <= n; a++) {
            if (memo[a] < memo[a - 1]) {
                ans[a] = 0;
            } else if (memo[a] > memo[a - 1]) {
                ans[a] = memo[a] - memo[a - 1];
            } else if (memo[a] == memo[a - 1]) {
                ans[a] = 1;
            }
            // Remove the redundant condition memo[a] == memo[a + 1] && memo[a] == memo[a - 1]
        }
        
        int total = 0;
        
        for (int a = 1; a <= n; a++) {
            total = total + ans[a];
        }
        
        printf("%d\n", total);
    }

    return 0;
}
