#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of the month (1-12): ";
    int month;
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days." << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days." << endl;
            break;
        case 2:
            cout << "28 or 29 days." << endl;
            break;
        default:
            cout << "Invalid month number." << endl;
    }

    return 0;
}