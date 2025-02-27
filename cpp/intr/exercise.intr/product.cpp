#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //varaible product
    int code,qty,discount;
    string name;
    float price;
    double total;
    
    //input data
    cout<<"---------------------Input----------------------\n";
    cout<<"Input code ";cin>>code;
    cout<<"Input name ";cin>>name;
    cout<<"Input qty ";cin>>qty;
    cout<<"Input price ";cin>>price;
    cout<<"Input discount ";cin>>discount;

    total =price*qty;
    total =(total * discount)/100;

    //output data
    cout<<"----------------------------------------Output------------------------------------------\n";
    cout<<setw(10)<<"Code"<<setw(10)<<"Name"<<setw(10)<<"Price"<<setw(8)<<"QTY"<<setw(12)<<"Discount"<<setw(10)<<"Total"<<endl;
    cout<<"----------------------------------------------------------------------------------------\n";
    cout<<setw(10)<<code<<setw(10)<<name<<setw(8)<<price<<"$"<<setw(8)<<qty<<setw(8)<<discount<<"%"<<setw(13)<<total<<"$"<<endl;
    return 0;
}