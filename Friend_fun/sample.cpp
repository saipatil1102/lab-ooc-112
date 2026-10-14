#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    friend void showMarks(Student s);
};

void showMarks(Student s) {
    cout << "Marks = " << s.marks;
}

int main() {
    Student s;
    showMarks(s);

    return 0;
}