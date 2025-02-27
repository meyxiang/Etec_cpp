#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //varaible product
    int code,qty,discount;
    string name,size;
    float price,total,payment;
    
    //input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Input code";cin>>code;
    cout<<"Input name";cin>>name;
    cout<<"Input size";cin>>size;
    cout<<"Input qty";cin>>qty;
    cout<<"Input price";cin>>price;
    cout<<"Input discount";cin>>discount;
    total=price*qty;
    discount=(total*discount)/100;
    payment=total-discount;

    //output data
    cout<<"----------------------------------------Output------------------------------------------\n";
    cout<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Size"<<setw(10)<<"Price"<<setw(8)<<"QTY"<<setw(10)<<"Discount"<<setw(10)<<"Total"<<setw(10)<<"Payment"<<endl;
    cout<<"----------------------------------------------------------------------------------------\n";
    cout<<setw(10)<<code<<setw(10)<<name<<setw(9)<<size<<setw(8)<<price<<"$"<<setw(8)<<qty<<setw(8)<<discount<<setw(9)<<total<<"$"<<setw(9)<<payment<<"$"<<endl;
    return 0;
}