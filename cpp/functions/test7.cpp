#include<iostream>

using namespace std;

float Sum(float a, float b)
{
    return a + b;
}

int main()
{
    float x,y;
    cout << "Enter X and Y : " ; cin >> x >> y;
    float result = Sum(x,y);
    cout << "result = " << result << endl;
    return 0;
}