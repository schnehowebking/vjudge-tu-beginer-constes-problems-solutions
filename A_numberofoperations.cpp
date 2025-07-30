#include<bits/stdc++.h>
using namespace std;

int main() {
    string expr;
    cin >> expr;

    int count = 0;
    for (int i = 0; i < expr.size(); i++) {
        if (i == 0 && (expr[i] == '+' || expr[i] == '-' || expr[i] == '*')) {
            continue;
        }

        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*') {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}