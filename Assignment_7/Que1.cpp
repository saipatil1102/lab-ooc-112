#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    int id;
    string name;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class 1
class Manager : public Employee
{
private:
    double salary;

public:
    void getManager()
    {
        getEmployee();
        cout << "Enter Manager Salary: ";
        cin >> salary;
    }

    void displayManager()
    {
        displayEmployee();
        cout << "Manager Salary: " << salary << endl;
    }
};

// Derived class 2
class Developer : public Employee
{
private:
    double salary;

public:
    void getDeveloper()
    {
        getEmployee();
        cout << "Enter Developer Salary: ";
        cin >> salary;
    }

    void displayDeveloper()
    {
        displayEmployee();
        cout << "Developer Salary: " << salary << endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    cout << "----- Manager Details -----" << endl;
    m.getManager();

    cout << "\n----- Developer Details -----" << endl;
    d.getDeveloper();

    cout << "\n===== Employee Management System =====" << endl;

    cout << "\nManager:" << endl;
    m.displayManager();

    cout << "\nDeveloper:" << endl;
    d.displayDeveloper();

    return 0;
}