#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int code[100][100];
    char name[100][100][100]; // row col string
    int qty[100][100];
    double price[100][100];
    int i, j, row, col;
    cout <<"Enter Row : "; cin >>row;
    cout <<"Enter Colum : "; cin >>col;
    for(i=0; i < row; i++)
    {
        for(j = 0; j<col; j++)
        {
            cout << "Enter Code  : "; cin >> code[i][j];
            cout << "Enter Name  : "; cin >> name[i][j];
            cout << "Enter Qty   : "; cin >> qty[i][j];
            cout << "Enter Price : "; cin >> price[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<setw(12)<<code[i][j]<<
            setw(12)<<name[i][j]<<
            setw(12)<<qty[i][j]<<
            setw(12)<<price[i][j]<< endl;
        }
    }
    return 0;
}