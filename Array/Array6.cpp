#include <iostream>
using namespace std;
 
int main() {
 
    // declare an array
    int arr[5];
 
    cout << "Enter array elements:" << endl;
 
    for (int index = 0; index < 5; ++index) {
        cin >> arr[index];
    }
 
    cout << "Array Elements:" << endl;
 
    // access array using loop
    for (int index = 0; index < 5; ++index) {
        cout << arr[index] << endl;
    }
 
    return 0;
}
