#include<iostream>

using namespace std;

int main()
{
    //Variable
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

    //Ternary
    grade = (avg > 90 && avg <= 100)? 'A':
    (avg > 80 && avg <= 90)? 'B':
    (avg > 70 && avg <= 80)? 'C':
    (avg > 60 && avg <= 70)? 'D':
    (avg > 50 && avg <= 60)? 'E':'F';

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