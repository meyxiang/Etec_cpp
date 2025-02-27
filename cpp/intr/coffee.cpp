#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //varaible coffee
    int id,qty;
    string name,size;
    float price,total;

    //Input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Enter ID : ";cin>>id;
    cout<<"Enter Name : ";cin.ignore();getline(cin,name);
    cout<<"Enter Size : ";cin>>size;
    cout<<"Enter QTY : ";cin>>qty;
    cout<<"Enter Price : ";cin>>price;

    total = price * qty;

    //Output data
    cout<<"---------------------Output----------------------\n";
    cout<<setw(9)<<"ID"<<setw(10)<<"Name"<<setw(10)<<"Size"<<setw(10)<<"Price"<<setw(8)<<"QTY"<<setw(10)<<"Total"<<endl;
    cout<<setw(10)<<id<<setw(12)<<name<<setw(6.5)<<size<<setw(7)<<price<<"$"<<setw(9)<<qty<<setw(9)<<total<<"$"<<endl;
    return 0;
}