#include<iostream>
using namespace std;
//methods = function
//create class
class Test
{
    private:
    // can using in block data members only
        int a=10;
        int b=20;
    public:
    // blocksz Methods properties get set funcation member constructor
        void Display()
        {
            cout << "A = " << a << endl;
            cout << "B = " << b << endl;
        }
};

int main()
{
    //create object 
    Test t;
    t.Display();
    return 0;
}