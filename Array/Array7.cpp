#include <iostream>
using namespace std;
 
// function to add two numbers
int add(int x, int y) {
    int sum = x + y;
    return sum;
}
 
int main() {
  
    int number1 = 12;
    int number2 = 14;
 
    // function call
    int ans = add(number1, number2);
    cout << "Sum: " << ans;
  
    return 0;
}
