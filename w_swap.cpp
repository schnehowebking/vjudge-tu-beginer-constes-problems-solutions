#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
 
    int first_digit = n / 100; 
    int last_digit = n % 10;
    int middle_digit = (n / 10) % 10;
    int result = last_digit * 100 + middle_digit * 10 + first_digit;
    cout << result<< endl;

    return 0;
}