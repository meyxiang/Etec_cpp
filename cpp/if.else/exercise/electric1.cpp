#include<iostream>

using namespace std;

int main()
{
    //variable
    int use_new,use_old,total,pay;

    //Input Data
    cout<<"Input Use_new : ";cin>>use_new;
    cout<<"Inout Use_old : ";cin>>use_old;

    total = use_new - use_old;

    if(total >=1 && total <= 10)
    {
        pay= total * 350;
    }
    else if(total > 10 && total <= 20)
    {
        pay= 10 * 350 + (total - 10) * 450;
    }
    else if (total > 20 && total <= 30)
    {
        pay= 10 * 350 + 10 * 450 + (total - 20) * 550;
    }
    else if (total > 30 && total <= 40)
    {
        pay= 10 * 350 + 10 * 450 + 30 * 550 + (total - 30) * 650;
    }
    else if (total > 40 && total <= 50)
    {
        pay= 10 * 350 + 10 * 450 + 30 * 550 + 40 * 650 + (total - 40) * 750;
    }
    else if (total > 50 && total <= 60)
    {
        pay= 10 * 350 + 10 * 450 + 30 * 550 + 40 * 650 + 50* 750 + (total - 50) * 850;
    }
    else
    {
        pay= 10 * 350 + 10 * 450 + 30 * 550 + 40 * 650 + 50* 750 + 60 * 850 + (total - 60) * 950;
    }

    //Output Data
    cout<<"________________INFORMATION__________________"<<endl;
    cout<<"Use_New : "<<use_new<<"kw"<<endl;
    cout<<"Use_Old : "<<use_old<<"kw"<<endl;
    cout<<"Total   : "<<total<<"kw"<<endl;
    cout<<"_____________________________"<<endl;
    cout<<"Payment : "<<pay<<"Riel"<<endl;
    cout<<"_____________________________"<<endl;
    return 0;
}