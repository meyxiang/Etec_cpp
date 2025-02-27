#include<iostream>
using namespace std;

struct Person
{
    string id;
    string name;
    string gender;
    double salary;
};

int main()
{
    struct  Person per[100];
    int n;
    cout <<"Enter the number of person : "; cin >> n;
    for ( int i = 0; i < n; i++)
    {
        cout << "Enter ID     : ";cin >> per[i].id;
        cout << "Enter Name   : ";cin >> per[i].name;
        cout << "Enter Gender : ";cin >> per[i].gender;
        cout << "Enter Salary : ";cin >> per[i].salary;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "ID     : " << per[i].id << endl;
        cout << "Name   : " << per[i].name << endl;
        cout << "Gender : " << per[i].gender << endl;
        cout << "Salary : " << per[i].salary << endl;
    } 
    return 0;  
}
