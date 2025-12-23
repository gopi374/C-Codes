#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0;

    cout << "Enter a number: ";
    cin >> number;  
    int temp = number;

    do {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10; 
    } while (temp != 0);

    cout << "The reverse of " << number << " is " << reverse << endl;

    return 0;
}