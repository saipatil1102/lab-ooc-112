// #include<iostream>
// using namespace std;

// class Employee
// {
//     public:

//     virtual int bonus()=0;
// };

// class Manager:public Employee
// {
//     public:
//     int bonus() override
//     {
//         cout<<"Manager class here !!";
//         return 1;
//     }
// };

// class Developer:public Employee
// {
//     public:
//     int bonus() override
//     {
//         cout<<"Developer class here !!";
//         return 1;
//     }
// };

// int main()
// {

// Employee *emp;


//   Manager man;
//   Developer dev;
// emp=&man;
//   man.bonus();
// emp=&dev;
//   dev.bonus();

//   return 0;
// }


#include <iostream>
using namespace std;

class Employee {
protected:
    double salary;

public:
    Employee(double s) : salary(s) {}

    virtual double calculateBonus() {
        return 0;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    Manager(double s) : Employee(s) {}

    double calculateBonus() override {
        // Manager gets 20% of salary as bonus
        return salary * 0.20;
    }
};

class Developer : public Employee {
public:
    Developer(double s) : Employee(s) {}

    double calculateBonus() override {
        // Developer gets 10% of salary as bonus
        return salary * 0.10;
    }
};

int main() {
    Manager manager(80000);
    Developer developer(60000);

    Employee* employees[] = { &manager, &developer };

    for (Employee* employee : employees) {
        cout << "Bonus: " << employee->calculateBonus() << endl;
    }

    return 0;
}