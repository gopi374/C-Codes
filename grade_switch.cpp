#include <iostream>
using namespace std;

int main() {
    // Declare variable to store marks
    int marks;
    char grade;

    // Input the marks
    cout << "Enter the marks (0-100): ";
    cin >> marks;

    // Determine the grade using a switch statement
    switch (marks / 10) {
        case 10: // 100 marks
        case 9:  // Marks in range 90-99
            grade = 'A';
            break;
        case 8:  // Marks in range 80-89
            grade = 'B';
            break;
        case 7:  // Marks in range 70-79
            grade = 'C';
            break;
        case 6:  // Marks in range 60-69
            grade = 'D';
            break;
        case 5:  // Marks in range 50-59
            grade = 'E';
            break;
        default: // Marks less than 50
            grade = 'F';
    }

    cout << "The grade is: " << grade << endl;

    return 0;
}
