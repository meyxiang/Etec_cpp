#include<iostream>

using namespace std;

int main()
{
    //variable
    float eng,math,bio,earth,phy,total,avg;
    char grade;

    //Input Data
    cout<<"Input English : ";cin>>eng;
    cout<<"Input Math    : ";cin>>math;
    cout<<"Input Biology : ";cin>>bio;
    cout<<"Input Earth   : ";cin>>earth;
    cout<<"Input Physics : ";cin>>phy;

    total = eng + math + bio + earth + phy;
    avg = total/5;

    if(avg >= 90 && avg <= 100)
    {
        grade = 'A';
    }
    else if(avg >= 80 && avg <= 90)
    {
        grade = 'B';
    }
    else if(avg >= 70 && avg <= 80)
    {
        grade = 'c';
    }
    else if(avg >= 60 && avg <= 70)
    {
        grade = 'D';
    }
    else if(avg >= 50 && avg <= 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    //Output Data
    cout<<"________________INFORMATION__________________"<<endl;
    cout<<"English : "<<eng<<endl;
    cout<<"Math    : "<<math<<endl;
    cout<<"Biology : "<<bio<<endl;
    cout<<"Earth   : "<<earth<<endl;
    cout<<"Physics : "<<phy<<endl;
    cout<<"___________________________"<<endl;
    cout<<"Total   : "<<total<<endl;
    cout<<"Average : "<<avg<<endl;
    cout<<"Grade   : "<<grade<<endl;
    cout<<"___________________________"<<endl;
    return 0;
}