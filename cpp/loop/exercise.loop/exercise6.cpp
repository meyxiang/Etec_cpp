#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int i=0,bin=0;
    int dec;

    cout<<"Enter a decimal number : ";cin>>dec;

    while (dec > 0)
    {
        bin = bin + dec % 2 * pow (10 , i);

        dec = dec / 2;

        i++;
    }
    
    cout <<"Binary number is : "<<bin<<endl;

    return 0;
}
// Network