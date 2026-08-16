#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year :";
    cin>>year;

    if(year%400==0||(year%4==0&&year%100!=0))
    {
        cout<<"Year is leap ";

    }
    else
    {
        cout<<"year is not leap";
    }
    return 0;
}