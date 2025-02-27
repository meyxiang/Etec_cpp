#include<iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    string gender;
    double salary;
}; // emp; for object gobal

int main()
{
    // create object local
    struct Employee emp;
    cout << "Enter ID     : ";cin >> emp.id;
    cout << "Enter Name   : ";cin >> emp.name;
    cout << "Enter Gender : ";cin >> emp.gender;
    cout << "Enter Salary : ";cin >> emp.salary;

    cout << "ID     : " << emp.id <<endl;
    cout << "Name   : " << emp.name <<endl;
    cout << "Gender : " << emp.gender <<endl;
    cout << "Salary : " << emp.salary <<endl;
    return 0;
}
