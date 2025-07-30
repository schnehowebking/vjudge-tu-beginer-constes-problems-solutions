#include<bits/stdc++.h>
using namespace std;

int main()
{
    string nmbr;
    char a, b;

    cin >> nmbr;
    cin >> a >> b;

    for (int i = 0; i < nmbr.length(); i++) {
        if (nmbr[i] == a) {
            nmbr[i] = b;
        }
    }

    int i = 0;
    while (i < nmbr.length() && nmbr[i] == '0') {
        i++;
    }

    if (i == nmbr.length()) {
        cout << "0" << endl;
    } else {
        for (int j = i; j < nmbr.length(); j++) {
            cout << nmbr[j];
        }
        cout << endl;
    }



    return 0;
}