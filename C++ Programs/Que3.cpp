#include <iostream>
using namespace std;
int main()
{
    int a,b,sum=0,sub=0,mul=0,div=0,n;
    cout<<"Enter any two numbers :";
    cin>>a>>b;

    cout<<"1. Addition of two numbers"<<endl;
    cout<<"2. Substraction of two numbers"<<endl;
    cout<<"3. Multiplication of two numbers"<<endl;         
    cout<<"4. Division of two numbers"<<endl;
    
    cout<<"Enter your choice: ";
    cin>>n;

    switch(n)
    {
        case 1:
        sum=a+b;
        cout<<"Sum of two numbers :" <<sum;
        break;

        case 2:
        sub=a-b;
        cout<<"Substraction of two numbers "<<sub;
        break;
        
        case 3:
        mul=a*b;            
        cout<<"Multiplication of two numbers "<<mul;
        break;      

        case 4:
        div=a/b;
        cout<<"Division of two numbers "<<div;
        break;  

        default:
        cout<<"Enter valid choice";
        break;

    }
}