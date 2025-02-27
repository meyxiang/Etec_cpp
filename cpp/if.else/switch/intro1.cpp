#include<iostream>

using namespace std;

int main()
{
    int op;
    //Product
    cout<<"[1 - Cocacola ]"<<endl;
    cout<<"[2 - Hot Latte ]"<<endl;
    cout<<"[3- Ice Latte]"<<endl;
    cout<<"Please Seclect One Option : ";cin>>op;

    switch (op){
        case 1:{
            cout<<"[Name : Cocacola ]"<<endl;
            cout<<"Price : 4.5 Dollar"<<endl;
        }break;
        case 2:{
            cout<<"[Name : Hot Latte ]"<<endl;
            cout<<"Price : 5.5 Dollar"<<endl;
        }break;
        case 3:{
            cout<<"[Name : Ice Latte ]"<<endl;
            cout<<"Price : 5 Dollar"<<endl;
        }break;
        default:{
            cout<<"invald option"<<endl;
        }
    }
    return 0;
}