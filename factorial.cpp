#include <iostream>
using namespace std;
int main(){
	int a;
	int fact = 1;
	
	cout << "Enter a positive number : ";
	cin >> a;
	if(a < 0){
		cout << "Factorial can not be define by zero";
	}
	else{
		for(int i = 1; i <= a; i++){
			fact *= i;
		}
		
	}
	
	cout << "Factorial of " << a << " is " << fact;
	
	return 0;
}
