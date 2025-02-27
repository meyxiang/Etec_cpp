#include<iostream>
using namespace std;

int main()
{
    int i, n;
    int num[10];

    cout<<"Enter Number of Arrays : "; cin >> n;

    for (i=0; i<n; i++)
    {
        cout<<"Enter Elements " << i + 1 << ": "; cin >> num[i];
    }
    
    for (i=0; i<n; i++)
    {
        cout<<"Result of Array " << i + 1 << " : " << num[i] << endl;
    }
    return 0;
}