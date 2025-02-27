//note none return function has paremeters
#include<iostream>
using namespace std;

void Sum(int a, string b, string c, int d)
{
    cout <<"ID     : "<<a<<endl;
    cout <<"Name   : "<<b<<endl;
    cout <<"Gender : "<<c<<endl;
    cout <<"Age    : "<<d<<endl;
}

int main()
{
    int id;
    string name,gender;
    int age;
    cout<<"Enter ID : ";cin>>id;
    cout<<"Enter Name : ";cin>>name;
    cout<<"Enter Gender : ";cin>>gender;
    cout<<"Enter Age : ";cin>>age;

    //calling functions
    Sum(id,name,gender,age);
    return 0;
}
