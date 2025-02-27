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
    cout<<"Input Name  : ";cin>>name;
    cout<<"Input QTY   : ";cin>>qty;
    cout<<"Input Price : ";cin>>price;

    total = qty * price;

    //Using Ternary
    dis = (total >= 1 && total <= 10)? total - (total * 10) / 100: //can use another (total * dis) / 100:
    (total >= 10 && total <= 20) ? total - (total * 20) / 100 :
    (total >= 20 && total <= 30) ? total - (total * 30) / 100 :
    (total >= 30 && total <= 40) ? total - (total * 40) / 100 :
    (total >= 40 && total <= 50) ? total - (total * 50) / 100 :
    (total >= 50 && total <= 60) ? total - (total * 60) / 100 : total - (total * 70) / 100;

    payment = total - dis;

    //Output Data
    cout<<"=====================Payment===================="<<endl;
    cout<<"Code     : "<<code<<endl;
    cout<<"Name     : "<<name<<endl;
    cout<<"QTY      : "<<qty<<endl;
    cout<<"Price    : "<<price<<"$"<<endl;
    cout<<"================================================"<<endl;
    cout<<"Total    : "<<total<<"$"<<endl;
    cout<<"Discount : "<<dis<<"$"<<endl;
    cout<<"Payment  : "<<payment<<"$"<<endl;
    
    return 0;
}