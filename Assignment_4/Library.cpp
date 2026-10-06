#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
    int bookId;
    string bookName;
    bool issued;

public:
    // Function to accept book details
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin.ignore();
        getline(cin, bookName);

        issued = false;
    }

    // Function to issue book
    void issueBook()
    {
        if (issued == false)
        {
            issued = true;
            cout << "Book issued successfully.\n";
        }
        else
        {
            cout << "Book is already issued.\n";
        }
    }

    // Function to return book
    void returnBook()
    {
        if (issued == true)
        {
            issued = false;
            cout << "Book returned successfully.\n";
        }
        else
        {
            cout << "Book was not issued.\n";
        }
    }

    // Function to display book details
    void displayBook()
    {
        cout << "\nBook ID: " << bookId;
        cout << "\nBook Name: " << bookName;

        if (issued == true)
            cout << "\nStatus: Issued\n";
        else
            cout << "\nStatus: Available\n";
    }
};

int main()
{
    LibraryBook b;

    b.addBook();
    b.displayBook();

    b.issueBook();
    b.displayBook();

    b.returnBook();
    b.displayBook();

    return 0;
}