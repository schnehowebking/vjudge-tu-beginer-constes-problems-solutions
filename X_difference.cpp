#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
 
    int first_digit = n / 100; 
    int last_digit = n % 10;
    int middle_digit = (n / 10) % 10;
    int sum = first_digit + last_digit + middle_digit;
    int product = first_digit * last_digit * middle_digit;
    cout << product - sum << endl;

    return 0;
}