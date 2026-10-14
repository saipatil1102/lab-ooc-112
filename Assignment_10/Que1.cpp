#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream file("input.txt");

    if (!file) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    string line;
    int lines = 0, words = 0, characters = 0;

    while (getline(file, line)) {
        lines++;
        characters += line.length();

        stringstream ss(line);
        string word;

        while (ss >> word) {
            words++;
        }
    }

    file.close();

    cout << "Number of lines: " << lines << endl;
    cout << "Number of words: " << words << endl;
    cout << "Number of characters: " << characters << endl;

    return 0;
}