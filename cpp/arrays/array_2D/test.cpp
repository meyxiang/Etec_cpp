#include<iostream>
using namespace std;

int main()
{
    int a[20][20]; //array[size_row][size_colum]
    int row, col;
    int i, j;
    cout << "Enter Number of Row and Colum : "; cin >> row;cin >> col;

    for(i=0; i < row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout << "Enter A : "; cin >> a[i][j];
        }
    }
    for(i = 0; i < row; i++)
    {
        cout << endl;
        for(j = 0; j < col; j++)
        {
            cout << a[i][j]<<"    ";
        }

    }
    return 0;
}