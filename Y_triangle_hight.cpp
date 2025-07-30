#include<bits/stdc++.h>
using namespace std;

int main() {
    int s, a;
    cin >> s >> a;

    double h = (-a + sqrt(a * a + 8.0 * s)) / 2.0;

    cout << fixed << setprecision(2) << h << endl;

    return 0;
}