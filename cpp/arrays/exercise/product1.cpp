#include<iostream>
#include<iomanip>
using namespace std;

int code[] ={1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008};
string name[] ={"Hot latte", "Green tea", "Espresso", "Americano", "Cappuccino", "Macchiato", "Lemon tea", "Mint tea"};
int qty[] ={20, 30, 25, 36, 0, 37, 28, 12};
double price[] ={2.5, 2, 2.8, 3, 2.1, 2.7, 1.8, 1.6};

void Display(int i)
{
    cout << setw(12) << code[i] <<
    setw(12) << name[i] <<
    setw(12) << qty[i] <<
    setw(12) << price[i] <<endl;
}

void Header()
{
    cout << setw(12) << "Code" <<
    setw(12) << "Name" <<
    setw(12) << "Qty" <<
    setw(12) << "Price" <<endl;
}

int main()
{
    int order_qty;
    double paydol, paykhr;
    int op;

    do
    {
        cout <<"=================[ Coffee ]=================" << endl;
        cout << "[1 - Check Stock ]" << endl;
        cout << "[2 - Order       ]" << endl;
        cout << "[3 - PAY DOLLAR  ]" << endl;
        cout << "[4 - PAY KHR     ]" << endl;
        cout << "[5 - Exit        ]" << endl;
        cout << "Please select one option : "; cin >> op;
     switch (op)
        {
            case 1:
            {
                Header();
                for(int i = 0; i < 8; i++)
                {
                    Display(i);
                }
            } break;
            case 2:
            {
                string searchname;
                cout <<"Order Name : "; cin >> searchname;
                bool check = false;
                for(int i = 0; i < 8; i++)
                {
                    if(searchname == name[i] )
                    {
                        check = true;
                        cout <<"Enter Order : "; cin >> order_qty;
                        if(qty[i] >= order_qty)
                        {
                            qty[i] -= order_qty;
                            paydol = order_qty * price[i];
                            cout << "Order Successfully" << endl;
                        }
                        else
                        {
                            cout <<"Product in stock: " << qty[i] << ". please order again." << endl;
                        }
                    }
                }
            }break;
            case 3:
            {
                cout<<"PAYMENTS = "<< paydol << " $ " <<endl;
            } break;
            case 4:
            {
                paykhr = paydol * 4100;
                cout << "PAYMENTS = " << paykhr << " Riel " <<endl;
            } break;
            case 5:
            {
                cout << "Exiting " << endl;
            } break;
            default:
            {
                cout << "Invalid Option" << endl;
            }   
        }   
    }while (op != 6);
    return 0;
}
