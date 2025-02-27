#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
    int n;
    double sum = 0;

    cout << "Enter the Number n : ";cin>>n;

    for (int i = 1; i <= n; i++) // n=5 if put i < n eg 1 to 4 and i <= n eg 1 to 5
    {
        sum += cos(i);  
    }

    cout << "Sum of cos(1)+cos(2)+...+("<< n << ") = " << sum << endl;
    
    return 0;
}