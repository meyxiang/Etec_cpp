#include<iostream>

using namespace std;

int main()
{
    int us_old,us_new;
    double total,pay;
    cout<<"Enter us_old : ";cin>>us_old;
    cout<<"Enter us_new : ";cin>>us_new;

    total = us_new - us_old;

    if(total >=0 && total <=10)
    {
        pay= total * 350;
    }
    else if(total >10 && total <=20)
    {
        pay= 10 * 350 + (total-10) * 450;
    }
    else (total >20 && total <=30);
    {
        pay= 10 * 350 + 10 * 450 + (total-20) * 550;
    }
    cout<<"________________Payment__________________"<<endl;
    cout<<"Us_New  : "<<us_new<<"\tkw"<<endl;
    cout<<"Us_Old  : "<<us_old<<"\tkw"<<endl;
    cout<<"Total   : "<<total<<"\tkw"<<endl;
    cout<<"_____________________________"<<endl;
    cout<<"Payment : "<<pay<<"\tRiel"<<endl;
    cout<<"_____________________________"<<endl;
    return 0;
}