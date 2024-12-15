#include <iostream>
using namespace std;
int main(){
	int n,m;
	cout << "Enter the number of people : ";
	cin >> n;
	cout << "Enter the number of chocolate : ";
	cin >> m;
	if(n == 0){
		cout << "Divisible by zero is not possible!" << endl; 
	}
	else if(m % n == 0){
		cout << "Yes, the chocolates can be divided equally" << endl;
		cout << "Each person will get " << (m / n) << " Chocolates" << endl;
	}
	else{
		cout << "No the chocolates can not be divided equally among " << n << " peoples" << endl;
	}
	return 0;
}
