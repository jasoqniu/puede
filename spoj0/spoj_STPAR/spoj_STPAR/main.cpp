//
//  main.cpp
//  spoj_STPAR
//
//  Created by Jason Qiu on 02/02/24.
//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int c;
    while (true) {
        scanf("%d", &c);
        if (c == 0) break;

        int start[c];
        stack<int> side;

        for (int a = 0; a < c; a++) {
            scanf("%d", &start[a]);
        }

        int expected = 1;
        bool valid = true;

        for (int a = 0; a < c; a++) {
            if (start[a] == expected) {
                expected++;
            } else if (!side.empty() && side.top() == expected) {
                side.pop();
                expected++;
                a--;
            } else {
                side.push(start[a]);
            }
        }

        while (!side.empty() && side.top() == expected) {
            side.pop();
            expected++;
        }

        if (side.empty()) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
            while (!side.empty()) side.pop();
        }
    }

}
