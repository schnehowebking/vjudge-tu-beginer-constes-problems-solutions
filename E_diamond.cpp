#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while (cin >> N && N != 0) {
   
        for (int i = 1; i <= N; i++) {
            int stars = 2 * i - 1;
            int spaces = N - i;

            for (int j = 0; j < spaces; j++) {
                cout << ' ';
            }
            for (int j = 0; j < stars; j++) {
                cout << '*';
            }
            cout << endl;
        }
        for (int i = N - 1; i >= 1; i--) {
            int stars = 2 * i - 1;
            int spaces = N - i;

            for (int j = 0; j < spaces; j++) {
                cout << ' ';
            }
            for (int j = 0; j < stars; j++) {
                cout << '*';
            }
            cout << endl;
        }

        cout << endl;
    }
    
    return 0;
}