#include <iostream>
using namespace std;

int main() {
    int letter;

    cout << "Enter a number between 1 to 5: ";
    cin >> letter;

    switch (letter) {
        case 1:
            cout << "A";
            break;
        case 2:
            cout << "E";
            break;
        case 3:
            cout << "I";
            break;
        case 4:
            cout << "O";
            break;
        case 5:
            cout << "U";
            break;
        default:
            cout << "Invalid input";
    }

    return 0;
}
