#include<iostream>

using namespace std;

int main()
{
    char op;
    //Product
    cout<<"[A - Cocacola ]"<<endl;
    cout<<"[B - Hot Latte ]"<<endl;
    cout<<"[C- Ice Latte]"<<endl;
    cout<<"Please Seclect One Option : ";cin>>op;

    switch (op){
        case 'A': case 'a':{
            cout<<"[Name : Cocacola ]"<<endl;
            cout<<"Price : 4.5 Dollar"<<endl;
        }break;
        case 'B': case 'b':{
            cout<<"[Name : Hot Latte ]"<<endl;
            cout<<"Price : 5.5 Dollar"<<endl;
        }break;
        case 'C': case 'c':{
            cout<<"[Name : Ice Latte ]"<<endl;
            cout<<"Price : 5 Dollar"<<endl;
        }break;
        default:{
            cout<<"invald option"<<endl;
        }
    }
    return 0;
}