#include<iostream>
using namespace std;
//local
// create struct
struct structurename
{
    int a;
    int b;
    int c;
    int d;
}; //stn; for gobal //; for local

int main()
{
    //create object struct local object
    struct structurename stn; //when using gobal not use this
    cout << "Enter A : "; cin >> stn.a;
    cout << "Enter B : "; cin >> stn.b;
    cout << "Enter C : "; cin >> stn.c;
    cout << "Enter D : "; cin >> stn.d;
    return 0;
}