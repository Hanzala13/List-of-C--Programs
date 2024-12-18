#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	
	cout << "The numbers from " << a  << " to "<< b << " are " ;
	for(int i=a; i <=b; i++){
		cout << i << endl;
	}
	return 0;
    }
