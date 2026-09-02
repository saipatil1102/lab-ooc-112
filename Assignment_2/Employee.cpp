#include <iostream>
using namespace std;

class Employee 
{
    private:
     string name;
     string department;
     int employee_id,salary;

     public:

        void getdetails()
        {
            cout<<"Enter employee id : ";
            cin>>employee_id;
            cout<<"Enter Employee Name : ";
            cin>>name;
            cout<<"Enter Employee Department : ";
            cin>>department;
            cout<<"Enter Employee salary : ";
            cin>>salary;
        }

        void displaydetails()
        {
            cout<<"Employee id : "<<employee_id<<endl;
            cout<<"Employee name : "<<name<<endl;
            cout<<"Employee Department : "<<department<<endl;
            cout<<"Employee salary : "<<salary<<endl;
        }

        
        void annual_salary()
        {
            cout<<"Annual salary of employee is : "<<12*salary<<endl;
        }

};

int main()
{
    Employee e;
    e.getdetails();
    e.displaydetails();
    e.annual_salary();
    return 0;
}