#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    //varaible math
    int x1,x2,x3,y1,y2,z;

    //Input data
    cout<<"---------------Input---------------\n";
    cout<<"Enter number x1 : ";cin>>x1;
    cout<<"Enter number x2 : ";cin>>x2;
    cout<<"Enter number x3 : ";cin>>x3;
    cout<<"Enter number z : ";cin>>z;
    y1 = sin(x1);
    y2 = cos(x2);
    z = pow(x3,2)+pow(z,2);

    //Output data
    cout<<"---------------Output---------------\n";
    cout<<"Sin(x1) = "<<y1<<endl;
    cout<<"Cos(x2) = "<<y2<<endl;
    cout<<"(x3,2)+(z,2) = "<<z<<endl;
    return 0;
}