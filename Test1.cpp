#include<iostream>
using namespace std;

class Student
{
    public:
    int s_id;
    string s_name;
    int mark1;
    int mark2;
    string s_class;

    Student()
    {
        s_id=112;
        s_name="Sai";
        mark1=10;
        mark2=20;
    }
    Student(int id,string n,int m1,int m2)
    {
        s_id=id;
        s_name=n;
        mark1=m1;
        mark2=m2;
    }

    void display()
    {
        cout<<"Student id : "<<s_id<<endl;
        cout<<"Student name : "<<s_name<<endl;
        cout<<"Student mark1 : "<<mark1<<endl;
        cout<<"Student mark2 : "<<mark2<<endl; 
    }
    void display(string c)
    {
        s_class=c;
        cout<<"Student id : "<<s_id<<endl;
        cout<<"Student name : "<<s_name<<endl;
        cout<<"Student mark1 : "<<mark1<<endl;
        cout<<"Student mark2 : "<<mark2<<endl; 
        cout<<"Student class : "<<s_class<<endl;
    }

};

int main()
{
    Student s1;
    Student s2(101,"sai",10,20);
    s1.display();
    s1.display("cse");
     s2.display();
    s2.display("cse");
    return 0;
}