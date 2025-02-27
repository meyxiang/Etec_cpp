#include<iostream>
#include<iomanip>

using namespace std;

int code,qty;
string name,product_size;
double price, total,dis,payment,c_riel;

void Input()
{
    cout <<"===============[INPUT]=============="<<endl;
    cout <<"Enter Code  : ";cin >> code;
    cout <<"Enter Name  : ";cin >> name;
    cout <<"Enter Size  : ";cin >> product_size;
    cout <<"Enter QTY   : ";cin >> qty;
    cout <<"Enter price : ";cin >> price;
    
    total = price * qty;
    dis = (total * 10) / 100;
    payment = total - dis;

}

void Display()
{
    cout<<setw(12) << code <<
    setw(12) << name <<
    setw(12) << product_size <<
    setw(12) << qty <<
    setw(12) << price <<
    setw(12) << total <<
    setw(12) << dis <<
    setw(12) << payment <<endl;
}

void Header()
{
    cout<<setw(12) << "Code" <<
    setw(12) << "Name" <<
    setw(12) << "Size" <<
    setw(12) << "Qty" <<
    setw(12) << "Price" <<
    setw(12) << "Total" <<
    setw(12) << "Dis" <<
    setw(12) << "Payment" <<endl;
}

int main()
{
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
                Input();
            }break;
            case 2:
            {
                Header();
                Display();
            }break;
            case 3:
            {
                c_riel = payment * 4100;
                cout << "Payment KHR : " << c_riel << endl;
            }break;
            case 4:
            {
                cout << "Payment  : " << payment << endl;
            }
        }
    }while (op != 0);
    
    return 0;
}