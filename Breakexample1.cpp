#include <iostream>
using namespace std;
int main(){
	int num;
	int Total = 0;
	// Continue a looping until the user enters 0 or a negative integer
	while(true){
		// get a integer input from the user
		cout << "Enter an integer (0 or negative to exit): " << endl;
		cin >> num;
		if( num <= 0){
			break;
		}
		Total+=num;
	}
	
	
	cout << "Total sum: " << Total;
	return o;
}
