#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j, k;
    int row, col, block;
    int code[20][20][20];
    char name[20][20][20][20];
    int qty[20][20][20];
    double price[20][20][20];

    cout<<"Enter Block  : "; cin >> block;
    cout<<"Enter Row    : "; cin >> row;
    cout<<"Enter Column : "; cin >> col;
    for(k=0; k<block; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout << "Enter Code  : "; cin >> code[k][i][j];
                cout << "Enter Name  : "; cin.ignore();cin.getline(name[k][i][j],20); // namespace for char
                cout << "Enter Qty   : "; cin >> qty[k][i][j];
                cout << "Enter Price : "; cin >> price[k][i][j];
            }
        }
    }
    for(k=0; k<block; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<<setw(12)<<code[k][i][j]<<
                setw(12)<<name[k][i][j]<<
                setw(12)<<qty[k][i][j]<<
                setw(12)<<price[k][i][j]<<endl;

            }
        }
    }
    return 0;
}