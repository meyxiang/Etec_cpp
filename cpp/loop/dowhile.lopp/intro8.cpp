#include<iostream>

using namespace std;

int main()
{
    string status;
    do
    {
        cout<<"Do you love me?"<<endl;
        cout<<"Enter Status Yes/No : ";cin>>status;
    } while (status=="Yes" || status=="yes");
    return 0;
    
}