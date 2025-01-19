#include <iostream>
using namespace std;

int main() {
    // Create a double-type array named arr with initial values
    double arr[] = {2.7, 4.3, 12.8, 5.4};

    // Print the original array values in separate lines
    cout << "Original array values:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    // Update the 2nd and 4th elements of the array
    arr[1] = 3.7;
    arr[3] = 6.6;

    // Print the modified array values in separate lines
    cout << "\nArray values after updates:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}

