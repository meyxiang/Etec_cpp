#include<iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    string gender;
    double salary;
}emp; //object global

void Input()
{
    cout << "Enter ID     : ";cin >> emp.id;
    cout << "Enter Name   : ";cin >> emp.name;
    cout << "Enter Gender : ";cin >> emp.gender;
    cout << "Enter Salary : ";cin >> emp.salary;
}

void Output()
{
    cout << "ID     : " << emp.id << endl;
    cout << "Name   : " << emp.name << endl;
    cout << "Gender : " << emp.gender << endl;
    cout << "Salary : " << emp.salary << endl;
}

int main()
{
    Input();
    Output();
    return 0;
}
