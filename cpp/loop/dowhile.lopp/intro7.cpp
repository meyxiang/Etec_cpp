#include<iostream>

using namespace std;

int main()
{
    int op,code;
    string name;
    do{
        cout<<"[1 - Input ]"<<endl;
        cout<<"[2 - Output]"<<endl;
        cout<<"[3 - Search]"<<endl;
        cout<<"[4 - Exit  ]"<<endl;
        cout<<"Pls seclect one option : ";cin>>op;
        switch (op)
        {
             case 1:
             {
                cout<<"Code : ";cin>>code;
                cout<<"Name : ";cin>>name;
            }break;
            case 2:
            {
                cout<<"Code : "<<code<<endl;
                cout<<"Name : "<<name<<endl;
            }break;
            default:{
                cout<<"invald option"<<endl;
            }
        }
    } while (op!=0);
    return 0;
}