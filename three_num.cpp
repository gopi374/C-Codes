#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the three numbers
    int num1, num2, num3;

    // Input the three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    // Find the maximum using nested if-else
    int max;
    if (num1 > num2) {
        if (num1 > num3) {
            max = num1; // num1 is greater than both num2 and num3
        } else {
            max = num3; // num3 is greater than num1 but not compared with num2 here
        }
    } else {
        if (num2 > num3) {
            max = num2; // num2 is greater than both num1 and num3
        } else {
            max = num3; // num3 is greater than num2 but not compared with num1 here
        }
    }

    // Output the maximum number
    cout << "The maximum number is: " << max << endl;

    return 0;
}
