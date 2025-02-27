#include<iostream>
#include<string.h>

using namespace std;
 
int main()
{
    //Login
    char username[100],password[100],confirmpassword[100];

    cout<<"________________________Form Login______________________"<<endl;
    cout<<"\t\tUsername : ";cin>>username;
    cout<<"\t\tPassword : ";cin>>password;
    cout<<"\t\tConfirmpassword : ";cin>>confirmpassword;
    
    if(empty(username) || empty(password) || empty(confirmpassword)==0)
    {
        cout<<"Please enter your username"<<endl;
    }
    else{
        if(strcmp(username,"Xiang")==0)
        {
            if(strcmp(password,"abc456")==0)
            {
                if(strcmp(confirmpassword,"abc456")==0)
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