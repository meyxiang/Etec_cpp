#include<iostream>

using namespace std;

int main()
{
    int i;
    int j;
    int k;
    for(k=0; k<10; k++)
    {
        cout<<endl;
        for(i=0; i<10;i++)
        {
            cout<<endl;
            for(j=0; j<i+1;j++)
            {
                cout<<" "<<j;
            }
        }
    }
    return 0;
}