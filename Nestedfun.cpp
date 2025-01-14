#include <iostream>
#include <cmath>
using namespace std;

void PrintSquare(int sq){
    cout << sq * sq;
}

void Square(int sum){
    
    PrintSquare(sum);
    
}

void Add(int a, int b){
    
    int sum = a + b;
    Square(sum);
    
}

void CalculateSquareOfSum(int num1, int num2){
    
   Add(num1, num2);
   
}

int main(){
    
    int a,b;
    /* Input numbers from user */
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    
    //We have to calculate Square Of Sum Of two Numbers (a+b)^2
    CalculateSquareOfSum(a,b);
    return 0;
}

