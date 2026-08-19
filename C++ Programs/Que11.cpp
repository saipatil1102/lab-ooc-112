#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number :";
    cin>>n;

    if(n!=0)
    {
        if(n>0)
        {
            cout<<"number is positive ";

        }
        else
        {
            cout<<"Number is negative";
        }
    }
    else
    {
        cout <<"Enter any number other than zero";
    }
    return 0;
}