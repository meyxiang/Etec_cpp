#include <iostream>

using namespace std;

int main()
{
    //Varaible salary
    int id,hour;
    string name;
    char sex;
    float salary,rate;
    double total;

    //Input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Input ID     : ";cin>>id;
    cout<<"Input Name   : ";cin.ignore();getline(cin,name);
    cout<<"Input Sex    : ";cin>>sex;
    cout<<"Input Salary : ";cin>>salary;
    cout<<"Input Rate   : ";cin>>rate;
    cout<<"Input Hour   : ";cin>>hour;

    total = salary + (hour + rate);

    //Output data
    cout<<"-------------------Output---------------------\n";
    cout<<"ID     : "<<id<<endl;
    cout<<"Name   : "<<name<<endl;
    cout<<"Sex    : "<<sex<<endl;
    cout<<"Salary : "<<salary<<"$"<<endl;
    cout<<"Rate   : "<<rate<<endl;
    cout<<"Hour   : "<<hour<<"h"<<endl;
    cout<<"Total  : "<<total<<"$"<<endl;
    return 0;
}