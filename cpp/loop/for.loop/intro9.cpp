#include<iostream>

using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the Number: ";cin >> n;

    for(i = 1; i <= 10; i++)  
    {
        for(j = 1; j <= n; j++)
        {
            cout << j << " x " << i << " = " << j * i << "\t"; 
        }
        cout << endl;  
    }
    return 0;
}