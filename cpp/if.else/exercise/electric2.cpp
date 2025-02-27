#include<iostream>

using namespace std;

int main()
{
    //Variable
    int use_new,use_old,total,pay;

    //Input Data
    cout<<"Use_new : ";cin>>use_new;
    cout<<"Use_old : ";cin>>use_old;

    total = use_new - use_old;

    //Using Ternary
    pay = (total >= 1 && total <= 10) ? total * 350 :
    (total > 10 && total <= 20) ? 10 * 350 + (total - 10) * 450 :
    (total > 20 && total <= 30) ? 10 * 350 + 10 * 450 + (total - 20) * 550 :
    (total > 30 && total <= 40) ? 10 * 350 + 10 * 450 + 10 * 550 + (total - 30) * 650 :
    (total > 40 && total <= 50) ? 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + (total - 40) * 750 :
    (total > 50 && total <= 60) ? 10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + (total - 50) * 850 :
    10 * 350 + 10 * 450 + 10 * 550 + 10 * 650 + 10 * 750 + 10 * 850 + (total - 60) * 950;
    
    //Output Data
    cout<<"==================PAYMENT=================="<<endl;
    cout<<"Use_New : "<<use_new<<"kw"<<endl;
    cout<<"Use_Old : "<<use_old<<"kw"<<endl;
    cout<<"Total   : "<<total<<"kw"<<endl;
    cout<<"============================================"<<endl;
    cout<<"Payment : "<<pay<<"Riel"<<endl;
    cout<<"============================================"<<endl;
    return 0;
}// strlen using for long letter