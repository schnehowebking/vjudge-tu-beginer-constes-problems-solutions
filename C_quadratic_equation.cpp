#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "No roots" << endl;
    } else if (D == 0) {
        int x = -b / (2 * a);
        cout << "One root: " << x << endl;
    } else {
        int x1 = (-b - sqrt(D)) / (2 * a);
        int x2 = (-b + sqrt(D)) / (2 * a);
        if (x1 > x2) swap(x1, x2);
        cout << "Two roots: " << x1 << " " << x2 << endl;
    }

    return 0;
}