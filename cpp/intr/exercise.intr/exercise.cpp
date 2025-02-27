#include<iostream>

using namespace std;

int main()
{   
    //varaible
    double riel,dollar;

    cout<<"Enter Riel : ";cin>>riel;
    dollar = riel / 4000;
    cout<<" Dollar : "<<dollar<<endl;
   
    cout<<"Enter Dollar : ";cin>>dollar;;
    riel = dollar * 4100;
    cout<<" Riel : "<<riel<<endl;
    return 0;
}