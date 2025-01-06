#include <iostream>
using namespace std;

bool checkpriority(int num){
	if(num % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int num;
	cout << "Enter the number : ";
	cin >> num;
	bool result = checkpriority(num);
	
	if(result){
		cout << "Number is even";
	}
	else{
		cout << "Number is odd";
	}
	
	return 0;
}
