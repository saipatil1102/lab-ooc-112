
#include <iostream>
using namespace std;

class Box
{
private:
    float length, width, height;

public:
    // Default Constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate Volume
    float calculateVolume()
    {
        return length * width * height;
    }

    // Display Box Information
    void display()
    {
        cout << "Length  : " << length << endl;
        cout << "Width   : " << width << endl;
        cout << "Height  : " << height << endl;
        cout << "Volume  : " << calculateVolume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Box object destroyed." << endl;
    }
};

int main()
{
    // Default constructor
    Box b1;

    cout << "===== Box 1 (Default Constructor) =====" << endl;
    b1.display();

    // Parameterized constructor
    Box b2(10, 5, 4);

    cout << "\n===== Box 2 (Parameterized Constructor) =====" << endl;
    b2.display();

    // Copy constructor
    Box b3(b2);

    cout << "\n===== Box 3 (Copy Constructor) =====" << endl;
    b3.display();

    return 0;
}