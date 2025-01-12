#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
    int num, power;
    cout << "Enter the  number for which you want to find square root"<<endl;
    cin >> num;
 
    // find the power of number raised to power
    int result = sqrt(num);
  
    cout << "You answer is " << result;
 
    return 0;
}
