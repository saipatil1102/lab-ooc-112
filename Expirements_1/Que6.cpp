#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Emter value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"value of a :"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping value of a :"<<a<<endl;
    cout<<"After swapping value of b :"<<b<<endl;
    return 0;
}