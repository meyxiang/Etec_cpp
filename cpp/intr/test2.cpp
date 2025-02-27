#include<iostream>

using namespace std;

int main()
{
    //Varaible
    int second;
    int s,m,h;
    
    //Input data
    cout<<"Enter Second : ";cin>>second;
    h = (second / 3600);
    m = (second % 3600)/60;
    s = (second % 3600)%60;

    //Output
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}