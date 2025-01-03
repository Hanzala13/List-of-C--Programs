#include <iostream>
using namespace std;
void cube(int num){
	int result = num * num * num;
	cout << "Cube of square is : " << result;
}

int main(){
	int num;
	cout << "Enter the side of square : ";
	cin >> num;
	
	cube(num);
	
	return 0;
}
