#include<iostream>

using namespace std;

int main()
{
    int a = 90,b = 100;
    int c;
    
    //swap
    c = a;
    a = b;
    b = a;
    
    cout<<"Value A : "<<a<<endl;
    cout<<"Value B : "<<b<<endl;
    return 0;
}