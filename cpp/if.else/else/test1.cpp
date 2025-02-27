#include<iostream>

using namespace std;

int main()
{
    //varaible
    string username,password,confirmpassword;
    
    //Input data
    cout<<"Enter username : ";cin>>username;
    cout<<"Enter password : ";cin>>password;
    cout<<"Enter confirmpassword : ";cin>>confirmpassword;
    
    if(password==confirmpassword)

    //Output data
    {
        cout<<"Welcome to etec center"<<endl;
    }
    else
    {
        cout<<"Please register again"<<endl;
    }
    return 0;
}