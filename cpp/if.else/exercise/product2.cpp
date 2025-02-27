#include<iostream>

using namespace std;

int main()
{
    //variable
    int code,qty;
    string name;
    double price;
    float discount,total,payment;

    //Input Data
    cout<<"Input Code  : ";cin>>code;
    cout<<"Input name  : ";cin>>name;
    cout<<"Input QTY   : ";cin>>qty;
    cout<<"Input price : ";cin>>price;
    
    total = qty*price;

    if(total >= 1 && total <= 10)
    {
        discount = 10;
    }
    else if(total >= 10 && total <= 20)
    {
        discount = 20;
    }
    else if(total >= 20 && total <= 30)
    {
        discount = 30;
    }
    else if(total >= 30 && total <= 40)
    {
        discount = 40;
    }
    else if(total >= 40 && total <= 50)
    {
        discount = 50;
    }
    else if(total >= 50 && total <= 60)
    {
        discount = 60;
    }
    else
    {
        discount = 70;
    }
    payment = total - total*discount/100;

    //Output Data
    cout<<"=======================Payment====================="<<endl;
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"QTY      : "<<qty<<endl;
    cout<<"Price    : "<<price<<"$"<<endl;
    cout<<"Total    : "<<total<<"$"<<endl;
    cout<<"Discount : "<<discount<<"%"<<endl;
    cout<<"Payment  : "<<payment<<"$"<<endl;
    return 0;
}