// C++ program to show binary operator overloading

#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    // Default constructor
    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    // Parameterized constructor
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;                                                 

    }

    // Overloading (+) operator to perform addition of two Distance objects
   -D()
   {
    --feet;
    --inch;

    cout<<" "<<feet;
    cout<<" "<<inch;
   }

};

// Driver Code
int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    -d1;

  

    return 0;
}