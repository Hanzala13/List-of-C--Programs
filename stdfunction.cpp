#include <iostream>	
#include <cmath>
using namespace std;
int main(){
	int num, power;
	cout << "Enter the number : ";
	cin >> num;
	cout << "Enter the power : ";
	cin >> power;
	
	int result = pow(num, power);
	cout << "Your answer is : " << result;
	
	return 0;
}
