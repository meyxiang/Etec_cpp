#include<iostream>

using namespace std;

int main()
{
    //start
    int index = 0;
    int sum = 0;
    string status;
    do{
        cout<<"Enter Status: ";cin>>status;
        sum+=index;
        cout<<"Sum = "<<sum<<endl;
        index++;
    
    }while(status=="OK");
    return 0;

}