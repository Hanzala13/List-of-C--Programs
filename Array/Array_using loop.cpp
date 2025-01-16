#include <iostream>
using namespace std;
 
int main() {
 
    // create an array
    int numbers[5] = {1, 2, 3, 4, 5};
 
    // access array using loop
    for (int index = 0; index < 5; ++index) {
        cout << numbers[index] << endl;
    }
 
    return 0;
}
