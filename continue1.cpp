#include <iostream>
using namespace std;
int main(){
	for(int i =1; i<= 6 ; i++){
		if(i ==3){
			continue;
		}
		cout << i << " : " << "Chapter Read" << endl;
	}
	return 0;
}
