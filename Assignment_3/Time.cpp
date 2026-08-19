#include <iostream>
using namespace std;

class addtime   
{
    private:
    int h1,m1,s1;
    int h2,m2,s2;
    public:
    void getdata()
    {
        cout<<"Enter first time :";
        cin>>h1>>m1>>s1;

        cout<<"Enter second time :";
        cin>>h2>>m2>>s2;

    }
    void add()
    {
        int seconds=s1+s2;
        int minutes=m1+m2;
        int hour=h1+h2;

        minutes=minutes+seconds/60;
        seconds=seconds%60;

        hour=hour+minutes/60;
        minutes=minutes%60;

        cout<<"Time :";
        cout<<"Hours"<<hour<<endl;
        cout<<"Minutes"<<minutes<<endl;
        cout<<"Seconds"<<seconds<<endl;
    }
};

int main()
{
    addtime a;
    a.getdata();
    a.add();
    return 0;
}