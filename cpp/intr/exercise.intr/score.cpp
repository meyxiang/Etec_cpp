#include<iostream>

using namespace std;

int main()
{
    //Varaible marks
    float score1,score2,score3,score4,score5,total,average;
    //score can put name
    //Input data
    cout<<"---------------Input---------------\n";
    cout<<"Score1 : ";cin>>score1;
    cout<<"Score2 : ";cin>>score2;
    cout<<"Score3 : ";cin>>score3;
    cout<<"Score4 : ";cin>>score4;
    cout<<"Score5 : ";cin>>score5;

    total = (score1+score2+score3+score4+score5);
    average =total/5;

    //Output data
    cout<<"---------------Output---------------\n";
    cout<<"Score1  : "<<score1<<endl;
    cout<<"Score2  : "<<score2<<endl;
    cout<<"Score3  : "<<score3<<endl;
    cout<<"Score4  : "<<score4<<endl;
    cout<<"Score5  : "<<score5<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Total   : "<<total<<endl;
    cout<<"Average : "<<average<<endl;
    return 0;
}