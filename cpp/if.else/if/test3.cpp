#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    //for characters
    char a[100],b[100];

    cout<<"Enter Character A : ";cin >>a;
    cout<<"Enter Character B : ";cin >>b;

    if(strcmp(a,b)==0)
    {
        cout<<"equals character"<<endl;
    }
    return 0;
}