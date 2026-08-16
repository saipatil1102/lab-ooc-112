#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a :"<<endl;
    cin>>a;
    cout<<"Enter value of b :"<<endl;
    cin>>b;
    cout<<" value of a before swapping :"<<a<<endl;
    cout<< "Value of b before swapping :"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value of a after swapping : "<<a<<endl;
    cout<<"value of b after swapping :"<<b<<endl;
    return 0;
}