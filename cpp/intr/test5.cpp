#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    //varaible math
    int x,a;
    float b;

    //Input data
    cout<<"---------------Input---------------\n";
    cout<<"Enter number x : ";cin>>x;

    a = x+pow(x,2)+pow(x,3)+pow(x,4)-pow(x,5);
    b =sqrt(3*pow(x,2))/sqrt(2*pow(x,2));

    //Output data
    cout<<"---------------Output---------------\n";
    cout<<"A = "<<a<<endl;
    cout<<"B = "<<b<<endl;
    return 0;
}