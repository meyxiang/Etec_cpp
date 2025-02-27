#include<iostream>
#include<stdbool.h>
#include<iomanip>
#include<cstring>
using namespace std;
int code[100];
string name[100];
int qty [100];
double price[100], total[100], payment[100], discount[100], tax[100];
int i;

void AddProduct()
{
    cout << "Enter Product Code     : "; cin >> code[i];
    cout << "Enter Product Name     : "; cin >> name[i];
    cout << "Enter Product Quantity : "; cin >> qty[i];
    cout << "Enter Product Price    : "; cin >> price[i];
}

double Total()
{
    // 1.
    total[i] = qty[i] * price[i];
    return total[i];
    // 2.
    //return qty[i] * price[i]
}

double Discount()
{
    double t = Total();
    return (t >= 1 && t <= 100)? t * 0.1 :
    (t > 100 && t <= 200)? t * 0.2 :
    (t > 200 && t <= 300)? t * 0.3 :
    (t > 100 && t <= 400)? t * 0.4 : t * 0.5;  
}

double Tax()
{
    return Total() * 0.05;
}

double Payment()
{
    return Total() + Tax() - Discount();
}

void Header()
{
    cout<<setw(12) << "Code" <<
    setw(12) << "Name" <<
    setw(12) << "Qty " <<
    setw(12) << "Price" <<
    setw(11) << "Total" <<
    setw(12) << "Discount" <<
    setw(12) << "Tax" <<
    setw(12) << "Payment" << endl;
}

void Display()
{
    cout<<setw(12) << code[i] <<
    setw(12) << name[i] <<
    setw(11) << qty[i] <<
    fixed<<setprecision(2) <<
    setw(12) << price[i] <<
    setw(12) << Total() <<
    setw(12) << Discount() <<
    setw(12) << Tax() <<
    setw(12) << Payment() << endl;
}

int main()
{
    int op;
    int n;
    do
    {
        cout << "===============[MENU]================"<<endl;
        cout << "[1 - Add Product      ]" << endl;
        cout << "[2 - Display          ]" << endl;
        cout << "[3 - Search Product   ]" << endl;
        cout << "[4 - Update Product   ]" << endl;
        cout << "[5 - Insert Product   ]" << endl;
        cout << "[6 - Delete Product   ]" << endl;
        cout << "[7 - Sort Product     ]" << endl;
        cout << "[8 - Add Product      ]" << endl;
        cout << "[9 - Total Payment    ]" << endl;
        cout << "[10- Exit(0)          ]" << endl;
        cout << "[Please select one option pf product ] : "; cin >> op;
        switch (op)
        {
            case 1:
            {
                cout << "Enter Number of Product : "; cin >> n;
                for(i=0; i<n; i++)
                {
                    cout<<"==========#00"<<i+1<<"=========="<<endl;
                    AddProduct();
                }
            }break;    
            case 2:
            {
                Header();
                for(i=0; i < n; i++)
                {
                    Display();
                }
            }break;
            case 3:
            {
                bool check = false;
                int searchid;
                string searchname;
                int op;
                cout << "\t\t\tSearch by ID and Name? " << endl;
                cout << "\t\t\t\t[1. ID           ] " << endl;
                cout << "\t\t\t\t[2. Name         ] " << endl;
                cout << "\t\t\t\t[Enter Your Choice ] "; cin >> op;
                switch (op)
                {
                    case 1:
                    {
                        cout <<"Enter Product Name to search : "; cin >> searchid;
                        for(i=0; i<n; i++)
                        {
                            if(code[i]==searchid)
                            {
                                Header();
                                Display();
                                check == true;
                                cout << "Search Not Found...\n";
                                break;
                            }
                            if(check == false)
                            {
                                cout << "Search not Found...\n";
                            }
                        }
                    }break;
                    case 2:
                    {
                        cout << "Enter Product Name to search : "; cin >> searchname;
                        for(i=0; i<n; i++)
                        {
                            if(name[i]==searchname)
                            {
                                Header();
                                Display();
                                check == true;
                                cout << "Search Not Found...\n";
                                break;
                            }
                            if(check == false)
                            {
                                cout << "Search not Found...\n";
                            }
                        }
                    }break;
                }
            }break;
            case 4:
            {
                int updateid;
                string updatename;
                int op;
                bool check = false;
                cout << "\t\t\tUpdate by ID or Name?"<<endl;
                cout << "\t\t\t\t[1. ID           ] "<<endl;
                cout << "\t\t\t\t[2. Name         ] "<<endl;
                cout << "\t\t\t\t[Enter Your Choice ] "; cin >> op;
                switch (op)
                {
                    case 1:
                    {
                        cout << "Enter Product ID to Update : "; cin >> updateid;
                        for(i=0; i<n; i++)
                        {
                            if(code[i] == updateid)
                            {
                                AddProduct();
                                cout << "Update Successful...\n";
                                break;
                            }
                            if(check == false)
                            {
                                cout << "Update Successful...\n";
                            }
                        }
                    }break;
                    case 2:
                    {
                        cout << "Enter Product Name to Update : "; cin >> updatename;
                        for(i=0; i<n; i++)
                        {
                            if(name[i] == updatename)
                            {
                                AddProduct();
                                cout << "Update Successful...\n";
                                break;
                            }
                            if(check == false)
                            {
                                cout << "Update Successful...\n";
                            }
                        }
                    }break;
                }
            }break;
            case 5:
            {
                int insertid;
                string insertname;
                int op;
                bool check = false;
                string status;
                do
                {
                    cout << "\t\t\tUpdate by ID or Name? " << endl;
                    cout << "\t\t\t\t[1. Insert ID        ] " << endl;
                    cout << "\t\t\t\t[2. Insert Name      ] " << endl;
                    cout << "\t\t\t\t[Enter Your Choice : ] "; cin >> op;
                    switch (op)
                    {
                        case 1:
                        {
                            bool check = false;
                            int insertid;
                            cout << "Enter Prosuct ID to Insert After: "; cin >> insertid;
                            for(i = 0; i < n; i++)
                            {
                                if(code[i]==insertid)
                                {
                                    for (int j = n; j >= i; j--)
                                    {
                                        code[j] = code[j - 1];
                                        name[j] = name[j - 1];
                                        qty[j] = qty[j - 1];
                                        price[j] = price[j - 1];
                                        total[j] = total[j - 1];
                                        tax[j] = tax[j - 1];
                                        discount[j] = discount[j - 1];
                                        payment[j] = payment[j - 1];
                                    }
                                    AddProduct();
                                    n++;
                                    check = true;
                                    break;
                                }
                            }
                            if (check == false)
                            {
                                cout << "Insert not successful...\n";
                            }
                            else
                            {
                                cout << "Insert Successful...\n";
                            }
                        }break;
                        case 2:
                        {
                            bool check = false;
                            int insertname;
                            cout << "Enter Product Name to Insert After: "; cin >> insertname;
                            for ( i = 0; i < n; i++)
                            {
                                if(code[i]==insertname)
                                {
                                    for (int j = n; j >= i; j--)
                                    {
                                        code[j] = code[j - 1];
                                        name[j] = name[j - 1];
                                        qty[j] = qty[j - 1];
                                        price[j] = price[j - 1];
                                        total[j] = total[j - 1];
                                        tax[j] = tax[j - 1];
                                        discount[j] = discount[j - 1];
                                        payment[j] = payment[j - 1];
                                    }
                                    n++;
                                    AddProduct();
                                    check = true;
                                    break;
                                }
                            }
                            if (check == false)
                            {
                                cout << "Insert not successful...\n";
                            }
                            else{
                                cout << "Insert Succesful...\n";
                            }
                            
                        }break;
                    }
                    cout << "press keywords Yes/yes to continue or no got ot back : ";cin >>status;
                }while (status.compare( "Yes" ) ==0 || status.compare( "yes" ) == 0);  
            }break;
            case 6:
            {
                int deleteid;
                string deletename;
                int op;
                int check =0;
                string status;
                do
                {
                    cout <<"\t\t\tDelte by ID or Name?"<<endl;
                    cout <<"\t\t\t\t[1. Delete ID        ] "<<endl;
                    cout <<"\t\t\t\t[2. Delete Name      ] "<<endl;
                    cout <<"\t\t\t\t[Enter Your Choice : ] "; cin >> op;
                    switch (op)
                    {
                        case 1:
                        {
                            cout << "Enter Product ID to Delete: "; cin >> deleteid;
                            for ( i = 0; i < n; i++)
                            {
                                if(code[i] == deleteid)
                                {
                                    for (int j = i; j < n-1; j++)
                                    {
                                        code[j] = code[j + 1];
                                        name[j] = name[j + 1];
                                        qty[j] = qty[j + 1];
                                        price[j] = price[j + 1];
                                        total[j] = total[j + 1];
                                        tax[j] = tax[j + 1];
                                        discount[j] = discount[j + 1];
                                        payment[j] = payment[j + 1];
                                    }
                                    n--;
                                    check = 1;
                                    cout << "Delete Successful....\n";
                                    break;
                                }
                            }
                            if(check==0)
                            {
                                cout << "Delete Not Found...\n";
                            }            
                        }break;
                        case 2:
                        {
                            cout << "Enter Product Name to Delete: "; cin >> deletename;
                            for(i=0; i<n; i++)
                            {
                                if(deletename.compare(name[i])==0) 
                                if(status.compare("Yes") == 0) //if(strcmp(name[],deletename)==0) 
                                {
                                    for(int j=i; j<n-1; j++)
                                    {
                                        code[j] = code[j + 1];
                                        name[j] = name[j + 1];
                                        qty[j] = qty[j + 1];
                                        price[j] = price[j + 1];
                                        total[j] = total[j + 1];
                                        tax[j] = tax[j + 1];
                                        discount[j] = discount[j + 1];
                                        payment[j] = payment[j + 1];
                                    }
                                    n--;
                                    check = 1;
                                    cout << "Delete Successful....\n";
                                    break;

                                }
                            }
                        }break;
                    }
                }while(status.compare("Yes")==0);  
            }break;
            case 7:
            {
                int op;
                int check = 0;
                string status;
                do
                {
                    cout << "\t\t\tSort by ID or Name?"<<endl;
                    cout << "\t\t\t\t[1. Sort ID        ] "<<endl;
                    cout << "\t\t\t\t[2. Sort Name      ] "<<endl;
                    cout << "\t\t\t\t[Enter Your Choice : ] "; cin >> op;
                    switch (op)
                    {
                        case 1:
                        {
                            int n_code, n_qty;
                            string n_name;
                            double n_total, n_pay, n_dis, n_tax, n_price;
                            for(int i=0; i<n-1; i++)
                            {
                                for(int j=i+1; j<n; j++)
                                {
                                    if(code[i] > code[j]) // sign > = small to big
                                    {
                                        n_code = code[i];
                                        code[i] = code[j];
                                        code[j] = n_code;

                                        n_name = name[i];
                                        name[i] = name[j];
                                        name[j] = n_name;

                                        n_qty = qty[i];
                                        qty[i] = qty[j];
                                        qty[j] = n_qty;

                                        n_price = price[i];
                                        price[i] = price[j];
                                        price[j] = n_price;

                                        n_total = total[i];
                                        total[i] = total[j];
                                        total[j] = n_total;

                                        n_tax = tax[i];
                                        tax[i] = tax[j];
                                        tax[j] = n_tax;

                                        n_dis = discount[i];
                                        discount[i] = discount[j];
                                        discount[j] = n_dis;

                                        n_pay = payment[i];
                                        payment[i] = payment[j];
                                        payment[j] = n_pay;
                                        check = 1;
                                    } 
                                }
                            }
                            if(check==0)
                            {
                                cout << "Sort not Successfull...\n"<<endl;
                            }
                            else
                            {
                                cout << "Sort Successful...\n"<<endl;
                            }
                        }break;
                        case 2:
                        {
                            for(i = 0; i<n; i++)
                            {
                                for(int j=i+1; j<n; j++)
                                {
                                    if(name[i].compare(name[j]) > 0)
                                    {
                                        swap(code[i],code[j]);
                                        swap(name[i],name[j]);
                                        swap(qty[i],qty[j]);
                                        swap(price[i],price[j]);
                                        swap(total[i],total[j]);
                                        swap(tax[i],tax[j]);
                                        swap(discount[i],discount[j]);
                                        swap(payment[i],payment[j]);
                                        check = 1;
                                    }
                                }
                            }
                            if(check==0)
                            {
                                cout << "Sort not Successful...\n"<<endl;
                            }
                            else
                            {
                                cout << "Sort Successful...\n"<<endl;
                            }
                        }break;
                    }
                }while(op!=0);    
            }break;
            case 8:
            {
                int add;
                int b;
                cout << "Enter Add Product : "; cin >> add;
                for(i = n; i < n+add; i++)
                {
                    AddProduct();
                }
                n+=add;
                b = 1; // 1 = true, 0 = flase the same bool

                if(b==0)
                {
                    cout << "Error Add" << endl;
                }
                else
                {
                    cout << "Add Succesful...\n" << endl;
                }
            }break;
            case 9:
            {
                double sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum += total[i];
                }
                cout << "Total Sales : $" << sum << endl;
            }break;
        }      
    } while (op!=0);    
    return 0;
}