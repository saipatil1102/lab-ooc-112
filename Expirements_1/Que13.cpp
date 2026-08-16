#include <iostream>
using namespace std;
int main()
{
    int factorial=1,n;
    cout<<"Enter any number :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial;
    return 0;
}