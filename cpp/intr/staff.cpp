#include<iostream>

using namespace std;

int main()
{
    //varaible staffs
    int code,age,hour;
    string name,gender,dob,position;
    float salary,rate,total;

    //Input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Enter Code : ";cin>>code;
    cout<<"Enter Name : ";cin.ignore();getline(cin,name);
    cout<<"Enter Gender : ";cin>>gender;
    cout<<"Enter Age  : ";cin>>age;
    cout<<"Enter DOB  : ";cin>>dob;
    cout<<"Enter Position : ";cin>>position;
    cout<<"Enter Salary : ";cin>>salary;
    cout<<"Enter Rate : ";cin>>rate;
    cout<<"Entr Hour : ";cin>>hour;
   
    total = salary + (hour * rate);

    //output data
    cout<<"--------------------Output----------------------\n";
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"Gender   : "<<gender<<endl;
    cout<<"Age      : "<<age<<endl;
    cout<<"DOB      : "<<dob<<endl;
    cout<<"Position : "<<position<<endl;
    cout<<"Salary   : "<<salary<<"$"<<endl;
    cout<<"Rate     : "<<rate<<"$"<<endl;
    cout<<"Hour     : "<<hour<<"h"<<endl;
    cout<<"Total    : "<<total<<"$"<<endl;
    return 0;
}