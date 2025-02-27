#include<iostream>
using namespace std;

//syntax 2
void Sum();

int main()
{
    Sum();
    return 0;
}

void Sum()
{
    int a = 90, b = 50;
    cout << "a: " << a << "b: " << b <<endl;
    cout << "A + B = " << (a+b) <<endl;
}