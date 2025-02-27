#include<iostream>

using namespace std;

void Sum()
{
    int a,b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    cout <<"Sum : " << a + b << endl;
}

void Sum1()
{
    int a,b;
    cout <<"Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum : "<< a * b << endl;
}    
int main()
{
    Sum();
    Sum1();
    return 0;
}