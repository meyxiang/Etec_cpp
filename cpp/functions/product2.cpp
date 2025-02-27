#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
int code;
string name,Product_size;
double qty,price;

void AddProduct()
{
    cout <<"===============[INPUT]=============="<<endl;
    cout <<"Enter Code  : ";cin >> code;
    cout <<"Enter Name  : ";cin.ignore();getline(cin,name);
    cout <<"Enter Size  : ";cin >> Product_size;
    cout <<"Enter QTY   : ";cin >> qty;
    cout <<"Enter price : ";cin >> price;
}
double Total()
{
    return qty * price;
}
double Dis()
{
    return (Total() >= 1 && Total() <= 20)? (Total()* 10) / 100:
    (Total() > 20 && Total() <= 50)? (Total()* 20) / 100: (Total()* 30) / 100;
}
double Tax()
{
    return (Total() * 10) / 100;
}
double Payment()
{
    return Total() + Tax() - Dis();
}
void Display()
{
    cout<<setw(12) << code <<
    setw(14) << name <<
    setw(9) << Product_size <<
    setw(11) << price <<"$"<<
    setw(12) << qty <<
    setw(11) << Total() <<"$"<<
    setw(12) << Dis() <<"$"<<
    setw(11) << Tax() <<"$"<<
    setw(9) << Payment() <<"$"<< endl;

}
void Header()
{
    cout<<setw(12) << "Code" <<
    setw(12) << "Name" <<
    setw(12) << "Size" <<
    setw(12) << "Price" <<
    setw(12) << "Qty" <<
    setw(12) << "Total" <<
    setw(12) << "Dis" <<
    setw(12) << "Tax" <<
    setw(12) << "Payment" << endl; 
}

double KHR()
{
    return Payment() * 4100;
}

double Dollar()
{
    return Payment();
}

void Loading()
{
    system("Color a");
    char x = 219;
    //char x =178;
    //char x =175;
    //char x =177;
    cout<<"\n""\t\t\t\t       LOADING....\t\t\t\t\n";
    cout<<"\t\t\t"; for(int i=0; i<40; i++)
    {
        cout<<x;
        Sleep(80);
    }
    system("cls");
}
int main()
{
    Loading();
    int op;
    do
    {
        cout<<"===============[MENU]==============="<<endl;
        cout<<"[1 - INPUT      ]" << endl;
        cout<<"[2 - OUTPUT     ]" << endl;
        cout<<"[3 - PAY KHR    ]" << endl;
        cout<<"[4 - PAY DOLLAR ]" << endl;
        cout<<"[5 - Exit       ]" << endl;
        cout<<"Please select one option : ";cin>>op;
        switch (op)
        {
            case 1:
            {
                AddProduct();
            }break;
            case 2:
            {
                Header();
                Display();
            }break;
            case 3:
            {
                cout<<"PAYMENTS = "<<KHR()<<" KHR " << endl;
            }break;
            case 4:
            {
                cout << "PAYMENT  : " << Dollar() <<" Dollar " << endl;
            }
            default: cout << " invalid Option " << endl;
        }
    }while (op != 0);
    return 0;
}