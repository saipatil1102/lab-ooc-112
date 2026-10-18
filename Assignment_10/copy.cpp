// // File Handling with C++ using ifstream & ofstream
// // To write content in file and then read the content

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     // Creation of ofstream class object
//     ofstream fout;
//     string line;

   

//     // Creation of ifstream class object
//     ifstream fin;

//     // Open file in input mode
//     fin.open("sample3.txt");
//      // Open file in output mode
//     fout.open("sample4.txt");

   

//     // Read and display file content until EOF
//     while (getline(fin, line))
//     {
//         getline(cin, line);
//           // Write line into file
//         fout << line << endl;
//     }

//     // Close the file
//     fin.close();
//      // Close the file
//     fout.close();

//     return 0;
// }
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string line;

    // Open the source file
    fin.open("sample3.txt");

    // Open the destination file
    fout.open("sample4.txt");




    
    cout << "Copied content:" << endl;

    // Read from sample3.txt, copy to sample4.txt,
    // and display the copied content
    while (getline(fin, line))
    {
        fout << line << endl;
        cout << line << endl;
    }

    // Add new content to sample4.txt
    fout << "This is additional content." << endl;
    fout << "File handling in C++ is easy!" << endl;

    // Close the files
    fin.close();
    fout.close();

    // Display the newly added content
    cout << "\nAdditional content added to sample4.txt." << endl;
    cout << "This is additional content." << endl;
    cout << "File handling in C++ is easy!" << endl;

    return 0;
}