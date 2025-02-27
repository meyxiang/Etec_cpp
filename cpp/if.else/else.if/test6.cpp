#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter value a: ";cin>>a;

    if(a>0)
    {
        cout<<"A is Max"<<endl;
    }
    else if (a<0)
    {
        cout<<"A is Min"<<endl;
    }
    else
    {
        cout<<"A is Mid"<<endl;
    }
    return 0;
}