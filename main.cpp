#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string townName, fileName;
    int year, population;

    // Get user input
    cout << "Enter the name of the town: ";
    getline(cin, townName);

    cout << "Enter the name of the data file (e.g., People.txt): ";
    cin >> fileName;

    // Open file
    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error: Could not open file " << fileName << endl;
        return 1;
    }

    // Display title
    cout << "\n" << townName << " Population Growth" << endl;
    cout << "(each * represents 1,000 people)\n" << endl;

    // Read and display data
    while (inputFile >> year >> population) {
        cout << year << " ";
        for (int i = 0; i < population; i++) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();
    return 0;
}