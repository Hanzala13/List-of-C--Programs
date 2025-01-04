#include <iostream>
using namespace std;
 
// function definition
int MultiplyNumbers(int number1, int number2) {
        
    int result = number1 * number2;  
    return result;

}
 
int main() {
 
    // function call
    int result1 = MultiplyNumbers(6,8);
    cout<<"Result 1 : "<<result1<<endl;
 
    return 0;
}
