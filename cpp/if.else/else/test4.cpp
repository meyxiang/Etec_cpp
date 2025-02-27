#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string username,password,confirmpassword;

    cout<<"______________________Form Login___________________"<<endl;
    cout<<"\t\tUsername : ";cin>>username;
    cout<<"\t\tPassword : ";cin>>password;
    cout<<"\t\tConfirmpassword : ";cin>>confirmpassword;

    if(username.empty())
    {
        cout<<"Please enter your username"<<endl;
    }
    else{
        if(username=="Xiang")
        {
            if(password=="abc123")
            {
                if(confirmpassword=="abc123")
                {
                    cout<<"Welcome to etec center!"<<endl;
                }else{
                    cout<<"invlid confirm password"<<endl;
                }
            }else{
                cout<<"invalid password"<<endl;
            }
        }else{
            cout<<"invalid username"<<endl;
        }
    }
    return 0;
}