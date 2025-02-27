#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int code[] = {1001,1002,1003,1004,1005,1006,1007};
    string name[] = {"Dara", "Lyna", "Visal", "Dom", "Bopha", "Lompat", "Reaksa"};
    string gender[] = {"male", "female", "male", "male", "female", "male", "female"};
    double salary[] = {1200.00F, 1300.00F, 950.00F, 350.00F, 550.00F, 700.00F, 850.00F};
    
    for(int i = 0; i < 7; i++)

    cout << left << setw(12) << code[i] <<
    setw(12) << name[i] <<
    setw(12) << gender[i] <<
    setw(12) << salary[i] << endl;

    return 0;
}