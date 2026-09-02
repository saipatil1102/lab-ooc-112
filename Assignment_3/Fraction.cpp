# include <iostream>
using namespace std;

class Fraction 
{
    private :
    int num,den,numadd,denadd,numsub,densub;

    public:
    void accept()
    {
        cout<<"Enter Numerator : ";
        cin>>num;
        cout<<"Enter Denominator : ";
        cin>>den;
    }

    void add()
    {
        numadd = (num*den)+(den*num);
        denadd=(den*den);
        cout<<"Ddition : "<<numadd<<"/"<<denadd<<endl;

    }

    void sub()
    {
        numsub=(num*den)-(den*num);
        densub=(den*den);
        cout<<"Substraction : "<<numsub<<"/"<<densub<<endl;
    }
};

int main()
{
    Fraction f;
    f.accept();
    f.add();
    f.sub();
    return 0;
}