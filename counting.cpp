#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    // Input an integer from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Handle negative numbers
    if (number < 0) {
        number = -number; // Make it positive
    }

    // Count the digits using a 'for' loop
    for (; number > 0; number /= 10) {
        count++;
    }

    // Display the count
    cout << "The number of digits is: " << count << endl;

    return 0;
}

