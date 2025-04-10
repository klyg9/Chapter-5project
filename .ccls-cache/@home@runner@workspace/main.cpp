#include <iostream>
using namespace std;

int main() {
    const int TOTAL_ROWS = 10;

    // Pattern A - Increasing
    cout << "Pattern A" << endl;
    for (int i = 1; i <= TOTAL_ROWS; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B - Decreasing
    cout << "Pattern B" << endl;
    for (int i = TOTAL_ROWS; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}