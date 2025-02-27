#include<iostream>

using namespace std;

int main()
{
    int n,i;
    int fact = 1,sum = 0; //factorial

    cout<<"Enter the Number n : ";cin>>n;

    for(int i = 1; i <= n; i++) //n=6 if put i < n eg 1 to 5 and i <= n eg 1 to 6
    {
        fact *= i;
        sum += fact;
    }
    cout << "Sum of 1! + 2! + 3! + ... + " << n << "! = " << sum << endl;
    
    return 0;
}