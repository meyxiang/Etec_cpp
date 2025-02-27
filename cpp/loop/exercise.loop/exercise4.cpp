#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
    //start
    int i=1,n;
    double sum = 0;

    cout << "Enter the Number n : ";cin>>n;
    
    //stop
    while ( i <= n)
    {
        sum +=cos(i);
        
    //step
        i++;
    }

    cout << "Sum of cos(1)+cos(2)+...+("<< n << ") = " << sum << endl;
    
    return 0;
}