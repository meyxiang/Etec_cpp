#include<iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the number n : ";cin>>n;

    for (int i = 3; i <= n; i += 2) // n=9 if put i < n eg 3 to 7 and if put i <= n eg 3 to 9
    {
        sum += i;
    }

    cout << "Sum of 3 + 5 + 7 + ... + " << n << " = " << sum << endl;

    return 0;
}