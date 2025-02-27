#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char name[100],password[100],confirm[100];

    cout<<"Enter Name     : ";cin>>name;
    cout<<"Enter Password : ";cin>>password;
    cout<<"Enter Confirm  : ";cin>>confirm;

    if(strlen(name) || strlen(password)==0 || strlen(confirm)==0)
    {
        cout<<"Name is empty!"<<endl;
    }
    return 0;
}