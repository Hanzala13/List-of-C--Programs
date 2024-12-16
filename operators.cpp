#include <iostream>
using namespace std;
int main(){
	// Initialization of numbers
	
	int num1, num2, num3;
	cout << "Enter the first number : " ;
	cin >> num1;
	cout << "Enter the Second number : ";
	cin >> num2;
	cout << "Enter the third number : ";
	cin >> num3;
	
	//Conditions proposal
	
	int Firstlargest, secondlargest, smallest;
	if(num1 > num2 && num1 > num3){
		Firstlargest = num1;
		if(num2 > num3){
			secondlargest = num2;
			smallest = num3;
		}else{
			secondlargest = num3;
			smallest = num2;
		}
	}
	else if(num2 > num1 && num2 > num3){
		Firstlargest = num2;
		if(num1 > num3){
			secondlargest = num1;
			smallest = num3;
		}else{
			secondlargest = num3;
			smallest = num1;
		}
	}
	else{
			Firstlargest = num3;
			if(num1 > num2){
			    secondlargest = num1;
			    smallest = num2;
		}   else{
			    secondlargest = num2;
		        smallest = num1;
			
		}
	}
	cout << "The First Largest number is : " << Firstlargest << endl;
	cout << "The Second Largest number is : " << secondlargest << endl;
	cout << "The Smallest Largest number is : " << smallest << endl;
	
	return 0;
}
