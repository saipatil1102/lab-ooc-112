#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientId;
    string patientName;
    int consultationCharges;

public:
    // Register patient
    void registerPatient()
    {
        cout << "Enter Patient ID: ";
        cin >> patientId;

        cout << "Enter Patient Name: ";
        cin.ignore();
        getline(cin, patientName);
    }

    // Calculate consultation charges
    void calculateCharges()
    {
        consultationCharges = 500;
    }

    // Display patient information
    void displayPatient()
    {
        cout << "\n--- Patient Information ---";
        cout << "\nPatient ID: " << patientId;
        cout << "\nPatient Name: " << patientName;
        cout << "\nConsultation Charges: Rs. " << consultationCharges << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharges();
    p.displayPatient();

    return 0;
}