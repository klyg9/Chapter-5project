#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    string name, first, last;
    int count = 0;

    if (!inputFile) {
        cout << "Error: Could not open LineUp.txt" << endl;
        return 1;
    }

    // Read the first name to initialize comparisons
    inputFile >> name;
    if (inputFile) {
        first = last = name;
        count = 1;
    }

    // Read the rest of the names
    while (inputFile >> name) {
        count++;
        if (name < first) first = name;
        if (name > last) last = name;
    }

    inputFile.close();

    // Output the results
    cout << "Number of students: " << count << endl;
    cout << "First in line: " << first << endl;
    cout << "Last in line: " << last << endl;

    return 0;
}