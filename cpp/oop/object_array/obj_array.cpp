#include<iostream>
#include<iomanip>
using namespace std;

//create class employee
class Employee
{
    private:
    //block data members
        int id;
        string name;
        string gender;
        double salary;
    public: 
        //block methods
        // default constructor 
        Employee()
        {
            id = 0;
            name = "null";
            gender = "null";
            salary = 0;
        }
        Employee(int id, string name, string gender, double salary)
        {
            this->id = id;
            this->name = name;
            this->gender = gender;
            this->salary = salary;
        }
        void setId(int id)
        {
            this->id = id;
        }
        void setName(string name)
        {
            this->name = name;
        }
        void setGender(string gender)
        {
            this->gender = gender;
        }
        void setSalary(double salary)
        {
            this->salary = salary;
        }
        //property get
        int getId()
        {
            return id;
        }
        string getName()
        {
            return name;
        }
        string getGender()
        {
            return gender;
        }
        double getSalary()
        {
            return salary;
        }
    //function input
    void Input()
    {
        cout << "Enter Employee ID     : ";cin >> id;
        cout << "Enter Employee Name   : ";cin >> name;
        cout << "Enter Employee Gender : ";cin >> gender;
        cout << "Enter Employee Salary : ";cin >> salary;
    }
    //funtion output
    void Display()
    {
        cout << setw(12) <<id<<
        setw(12) << name<<
        setw(12) << gender<<
        setw(12) << salary<< endl;
    }
};
void Header()
{
    cout << setw(12) << "Code"<<
        setw(12) << "Name"<<
        setw(12) << "Gender"<<
        setw(12) << "Salary"<< endl;
}
int main()
{
    //create object array
    Employee emp[90];
    int n, i, op;
    do
    {
        cout << "====================[Employee Menu]==================="<<endl;
        cout<<"[ 1- Input data  ]"<< endl;
        cout<<"[ 2- Output data ]"<< endl;
        cout<<"[ 3- Search data ]"<< endl;
        cout<<"[ 4- Update data ]"<< endl;
        cout<<"[ 5- Delete data ]"<< endl;
        cout<<"[ 6- Sort data   ]"<< endl;
        cout<<"[ 7- Add data    ]"<< endl;
        cout<<"[ 8- Exit        ]"<< endl;
        cout << "Please select one option : "; cin >> op;
        switch(op)
        {
            case 1:
            {
                cout << "Enter Number of Employee : ";cin >> n;
                for(i = 0; i < n; i++)
                {
                    emp[i].Input();
                }
            }break;
            case 2:
            {
                Header();
                for(i = 0; i < n; i++)
                {
                    emp[i].Display();
                }
            }break;
            case 3:
            {
                bool check = false;
                int searchid;
                cout<<"Enter ID To Search : ";cin>>searchid;
                for(i=0; i<n; i++)
                {
                    if(searchid==emp[i].getId())
                    {
                        emp[i].Display();
                        check = true;
                    }
                }
                if(!check)
                {
                    cout<<"Search id not found..."<<endl;
                }
                else
                {
                    cout<<"Search found"<<endl; 
                }
            }break;
            case 4:
            {
                int new_code,op;
                bool check = false;
                cout<<"Enter Employee Code To Update : ";cin>>new_code;
                for(i = 0; i < n; i++)
                {
                    if(emp[i].getId()==new_code)
                    {
                        emp[i].Display();
                        check = true;
                        cout<<"==========[ UPDATE ]=================="<<endl;
                        cout<<"[ 1 - Update Name ]"<<endl;
                        cout<<"[ 2 - Update Gender  ]"<<endl;
                        cout<<"[ 3 - Update Salary ]"<<endl;
                        cout<<"Enter Your Choice : ";cin>>op;
                        switch(op)
                        {
                            case 1:
                            {
                                string name;
                                cout<<"Enter New Name : ";cin>>name;
                                emp[i].setName(name);
                            }break;
                            case 2:
                            {
                                string gender;
                                cout<<"Enter New Gender : ";cin>>gender;
                                emp[i].setGender(gender);
                            }break;
                            case 3:
                            {
                                double salary;
                                cout<<"Enter New Salary : ";cin>>salary;
                                emp[i].setSalary(salary);
                            }break;
                        }
                    }
                }
                if(!check)
                {
                    cout<<"Update Delete Not Success....\n";
                }
                else
                {
                    cout<<"Update Delete Success....\n";
                }  
            }
            case 5:
            {
                int deletecode;
                bool check = false;
                cout << "Enter Delete Code to Delete: "; cin >> deletecode;
                for (i = 0; i < *n; i++) 
                {
                    if (lec[i].getId() == deletecode) 
                    {
                        for (int j = i; j < *n - 1; j++) 
                        {
                            emp[j] = emp[j + 1]; 
                        }
                        (*n)--; 
                        check = true;
                        cout << "Deleted Employee Not Success....\n";
                    }
                }        
                if (!check) 
                {
                    cout << "Update Lecture Success....\n";
                }

            }    
        }while (op!=8);
    }
    return 0;
}