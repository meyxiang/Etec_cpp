#include<iostream>
using namespace std;

struct Person
{
    int id;
    string name;
    struct Employee
    {
        double salary;
        struct Staff
        {
            string position;
        }sta;
    }emp;  
}per;

int main()
{
    cout << "Enter ID       : "; cin >> per.id;
    cout << "Enter Name     : "; cin >> per.name;
    cout << "Enter Salary   : "; cin >> per.emp.salary;
    cout << "Enter Position : "; cin >> per.emp.sta.position;

    cout << "ID       : " << per.id<<endl;
    cout << "Name     : " << per.name<<endl;
    cout << "Salary   : " << per.emp.salary<<endl;
    cout << "Position : " << per.emp.sta.position<<endl;
    return 0;
}
// can using only in Datatype
// o in o meaning object in object