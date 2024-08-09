//
//  main.cpp
//  tulipwpiripwr
//
//  Created by Jason Qiu on 06/11/23.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int tc = 1; tc <= testcase; tc++) {
        int length;
        scanf("%d", &length);
        int numlength[length + 1];

        for (int a = 1; a <= length; a++) {
            scanf("%d", &numlength[a]);
        }

        int qlength;
        scanf("%d", &qlength);

        int num1, num2;
        int ans;
        int catatan = 0;

        printf("Case %d:\n", tc);

        int distinctCounts[length + 1]; // Create an array to store distinct counts
        memset(distinctCounts, 0, sizeof(distinctCounts));

        for (int a = 1; a <= length; a++) {
            // Check if the current number has been seen before
            if (distinctCounts[numlength[a]] == 0) {
                catatan++; // Increase the count of distinct numbers
            }
            distinctCounts[numlength[a]]++; // Increase the count of the current number
        }

        for (int a = 1; a <= qlength; a++) {
            scanf("%d", &num1);
            scanf("%d", &num2);

            // To find the distinct count in a given range, use the prefix count approach
            ans = catatan - (distinctCounts[numlength[num1]] - 1);
            if (num2 < length) {
                ans -= (distinctCounts[numlength[num2 + 1]] - 1);
            }
            printf("%d\n", ans);
        }
    }

    return 0;
}
