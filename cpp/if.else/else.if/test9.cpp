#include<iostream>

using namespace std;

int main()
{
    //Variable
    int code,qty;
    string name;
    float price,dis,total,payment;

    //Input Data
    cout<<"Input Code  : ";cin>>code;
    cout<<"Input name  : ";cin>>name;
    cout<<"Input QTY   : ";cin>>qty;
    cout<<"Input price : ";cin>>price;
    
    total = price * qty;
    
    if(total > 0 && total <= 10)
    {
        dis = (total *10)/100;
        payment = total - dis;
    }
    else if(total > 10 && total <= 20)
    {
        dis = (total *20)/100;
        payment = total - dis;
    }
    else(total > 20 && total <= 30);
    {
        dis = (total *30)/100;
        payment = total - dis;
    }

    //Output Data
    cout<<"=======================Payment====================="<<endl;
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"QTY      : "<<qty<<endl;
    cout<<"Price    : "<<price<<"$"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Total    : "<<total<<"$"<<endl;
    cout<<"Discount : "<<dis<<"$"<<endl;
    cout<<"Payment  : "<<payment<<"$"<<endl;
    return 0;
}