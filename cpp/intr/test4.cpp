#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    //varaible math
    int a,b,c,x,y,z;
    float discriminant1,discriminant2;
    
    //Input data
    cout<<"------------------Input-------------------\n";
    cout<<"Enter A : ";cin>>a;
    cout<<"Enter B : ";cin>>b;
    cout<<"Enter C : ";cin>>c;
    cout<<"Enter X : ";cin>>x;
    cout<<"Enter Y : ";cin>>y;
    cout<<"Enter Z : ";cin>>z;
    
    discriminant1 = ( - b + sqrt(pow(b,2)- 4 * a * c)) /(2 * a);
    discriminant2 = ( - y - sqrt(pow(y,2)- 4 * x * z)) /(2 * x);
    
    //Output data
    cout<<"------------------Output------------------\n";
    cout<<"Discrimination1 : "<<discriminant1<<endl;
    cout<<"Discrimination2 : "<<discriminant2<<endl;
    return 0;
}