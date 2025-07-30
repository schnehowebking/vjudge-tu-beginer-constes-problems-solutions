#include<bits/stdc++.h>
using namespace std;


int main() {
    int num;
    cin >> num;

    int first_digit = num / 100;   
    int last_digit = num % 10; 

    if (first_digit > last_digit)
        cout << first_digit << endl;
    else if (last_digit > first_digit)
        cout << last_digit << endl;
    else
        cout << "=" << endl;

    return 0;
}