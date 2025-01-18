#include <iostream>
using namespace std;
 
int main() {
 
    // create an array
    int arr[5] = {11, 9, 2, 7, 5};
 
    // Change the value of 4th element (3rd index)
    arr[3] = 16;
 
    // access array using loop
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
 
    return 0;
}

