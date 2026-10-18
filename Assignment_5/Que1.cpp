
#include <iostream>
using namespace std;

class Employee
{
private:
    int employeeID;
    string employeeName;
    float basicSalary;
    float HRA;
    float DA;

public:
    // Parameterized Constructor
    Employee(int id, string name, float basic, float hra, float da)
    {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    // Calculate Gross Salary
    float calculateGrossSalary()
    {
        return basicSalary + HRA + DA;
    }

    // Display Employee Details
    void displayDetails()
    {
        cout << "===== Employee Details =====" << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "HRA           : " << HRA << endl;
        cout << "DA            : " << DA << endl;
        cout << "Gross Salary  : " << calculateGrossSalary() << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "Employee object is destroyed." << endl;
    }
};

int main()
{
    // Creating object using constructor
    Employee e(101, "Rahul", 30000, 5000, 3000);

    // Display details
    e.displayDetails();

    return 0;
}
