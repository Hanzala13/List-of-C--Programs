#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;

    /* Input a number from the user */
    cout << "Enter any number to find reverse: "<<endl;
    cin >> num;

    /* Repeat the process until 'num' becomes 0 */
    while (num != 0) {
        /* Increase the place value of rev and add the last digit to rev */
        rev = (rev * 10) + (num % 10);

        /* Remove the last digit from 'num' */
        num /= 10;
    }

    /* Print the reversed number */
    cout << "Reverse = " << rev;

    return 0;
}

