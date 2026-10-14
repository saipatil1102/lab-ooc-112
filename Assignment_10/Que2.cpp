#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    char choice;

    // Open file in append mode
    ofstream outfile("records.txt", ios::app);

    if (!outfile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Add new records
    do {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        outfile << name << " " << age << endl;

        cout << "Do you want to add another record? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outfile.close();

    // Open file for reading
    ifstream infile("records.txt");

    if (!infile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "\nAll Records:\n";
    cout << "-------------\n";

    while (infile >> name >> age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    infile.close();

    return 0;
}