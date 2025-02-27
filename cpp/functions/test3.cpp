#include<iostream>
using namespace std;

int code;
string name;
string gender;

void Input()
{
    cout<<"Enter Code   : ";cin>>code;
    cout<<"Enter Name   : ";cin>>name;
    cout<<"Enter Gender : ";cin>>gender;
}

void Output()
{
    cout<<"Enter Code   : "<<code<<endl;
    cout<<"Enter Name   : "<<name<<endl;
    cout<<"Enter Gender : "<<gender<<endl;
}

int main()
{
    Input();
    Output();
    return 0;
}