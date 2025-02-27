#include<iostream>

using namespace std;

int main()
{
    int code;
    string name,sex;
    float math,khmer,english;
    float total,avg;
    char grade;

    cout<<"Enter Code : ";cin>>code;
    cout<<"Enter Name : ";cin.ignore();getline(cin,name);
    cout<<"Enter Sex : ";cin>>sex;
    cout<<"Enter math : ";cin>>math;
    cout<<"Enter khmer : ";cin>>khmer;
    cout<<"Enter english : ";cin>>english;
    
    total = math+khmer+english;
    avg = total/3;

    if(avg > 90 && avg <= 100)
    {
        grade = 'A';
    }
    else if(avg > 80 && avg <= 90)
    {
        grade = 'B';
    }
    else if(avg > 70 && avg <= 80)
    {
        grade = 'c';
    }
    else if(avg > 60 && avg <= 70)
    {
        grade = 'D';
    }
    else if(avg > 50 && avg <= 60)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    cout<<"________________INFORMATION__________________"<<endl;
    cout<<"Code    : "<<code<<endl;    
    cout<<"Name    : "<<name<<endl;
    cout<<"Sex     : "<<sex<<endl;
    cout<<"Math    : "<<math<<endl;
    cout<<"Khmer   : "<<khmer<<endl;
    cout<<"English : "<<english<<endl;
    cout<<"___________________________"<<endl;
    cout<<"Total   : "<<total<<endl;
    cout<<"Average : "<<avg<<endl;
    cout<<"Grade   : "<<grade<<endl;
    cout<<"___________________________"<<endl;
    return 0;
}