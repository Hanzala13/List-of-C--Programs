#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number between 1 and 15: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "Neither Prime nor Composite";
            break;
        case 2:
        case 3:
        case 5:
        case 7:
        case 11:
        case 13:
            cout << "Prime Number";
            break;
        case 4:
        case 6:
        case 8:
        case 9:
        case 10:
        case 12:
        case 14:
        case 15:
            cout << "Composite Number";
            break;
        default:
            cout << "Invalid Number";
            break;
    }

    return 0;
}
