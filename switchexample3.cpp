#include <iostream>
using namespace std;
int main(){
	int month;
	cout << "Enter the month between 1 to 12 : ";
	cin >> month;
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "This months has 31 days";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "This onth has 30 Days";
			break;
		case 2:
			cout << "This month has 28 days in non-leap year and 29 days in leap year";
			break;
		default:
		    cout << "Invalid number";
		
	}
	return 0;
}
