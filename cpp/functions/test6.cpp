// non parameter
#include<iostream>
using namespace std;

int Sum() // can change to another functions
{
    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;
    return a + b; 
}

int main()
{
    int result = Sum();
    //cout << " Sum = " << Sum() << endl;
    cout << "result = " << result << endl;
    return 0;
}