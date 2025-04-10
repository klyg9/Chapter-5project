#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startSize, days;
    double dailyIncrease;

    // Get and validate starting population size
    cout << "Enter starting number of organisms (min 2): ";
    cin >> startSize;
    while (startSize < 2) {
        cout << "Invalid. Must be at least 2: ";
        cin >> startSize;
    }

    // Get and validate average daily increase (percent)
    cout << "Enter average daily population increase (in %): ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0) {
        cout << "Invalid. Cannot be negative: ";
        cin >> dailyIncrease;
    }

    // Get and validate number of days
    cout << "Enter number of days organisms will multiply (min 1): ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid. Must be at least 1: ";
        cin >> days;
    }

    // Display population size for each day
    double population = startSize;
    cout << fixed << setprecision(2);
    for (int day = 1; day <= days; day++) {
        cout << "Day " << day << ": " << population << " organisms" << endl;
        population += (population * dailyIncrease / 100);
    }

    return 0;
}