#include<iostream>
#include<iomanip>
#include<windows.h>

using namespace std;

int id,age,hour;
string name,position;
double salary,total;
float rate;
void Input()
{
    cout <<"===============[INPUT]=============="<<endl;
    cout << "Enter ID       : " ; cin >> id;
    cout << "Enter Name     : " ; cin.ignore();getline(cin,name);
    cout << "Enter Age      : " ; cin >> age;
    cout << "Enter Position : " ; cin >> position;
    cout << "Enter Salary   : " ; cin >> salary;
    cout << "Enter Rate     : " ; cin>>rate;
    cout << "Entr Hour      : " ; cin>>hour;
    
    total = salary + (hour * rate);
}

void Display()
{
    cout<<setw(12) << id <<
    setw(12) << name <<
    setw(12) << age <<
    setw(12) << position <<
    setw(9)  << salary << "$" <<
    setw(12) << rate << "$" <<
    setw(12) << hour << "h" <<
    setw(12) << total << "$" <<endl;
}

void Header()
{
    cout<<setw(12) << "ID" <<
    setw(12) << "Name" <<
    setw(12) << "Age" <<
    setw(12) << "position" <<
    setw(12) << "Salary" <<
    setw(12) << "Rate" << 
    setw(12) << "Hour" << 
    setw(12) << "Total" << endl;
}

void Loading()
{
    system("Color a");
    char x = 219;
    cout<<"\n""\t\t\t\t       LOADING....\t\t\t\t\n";
    cout<<"\t\t\t"; for(int i=0; i<40; i++)
    {
        cout<<x;
        Sleep(80);
    }
    system("cls");
}

void Menu()
{
    int op;
    do
    {
        cout<<"===============[MENU]==============="<<endl;
        cout<<"[1 - INPUT      ]" << endl;
        cout<<"[2 - OUTPUT     ]" << endl;
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
                cout << "Total : " << total << endl;
            }
        }
    }while (op != 0); 
}

int main()
{
    Loading();
    Menu();
    return 0;
}