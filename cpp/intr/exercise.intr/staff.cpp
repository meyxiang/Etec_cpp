#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //varaible Staff
    int id;
    string name,gender,address;
    float salary;

    //input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Enter ID : ";cin>>id;
    cout<<"Enter Name : ";cin.ignore();getline(cin,name);
    cout<<"Enter Gender : ";cin>>gender;
    cout<<"Enter Address : ";cin.ignore();getline(cin,address);
    cout<<"Enter Salary : ";cin>>salary;
    
    //output data
    cout<<"---------------------------Output----------------------------\n";
    cout<<setw(8)<<"ID"<<setw(10)<<"Name"<<setw(12)<<"Gender"<<setw(10)<<"Address"<<setw(12)<<"Salary"<<endl;
    cout<<"-------------------------------------------------------------\n";
    cout<<setw(10)<<id<<setw(12)<<name<<setw(8)<<gender<<setw(12)<<address<<setw(8)<<salary<<"$"<<endl;
    return 0;
}