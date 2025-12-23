#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 2D array
    int array[12][3] = {
        {1, 2,3},
        {2, 5,1},
        {3, 2,2},
        {4, 2,5},
        {5, 2,6},
        {6, 2,9},
        {7, 2,8},
        {8, 2,6},
        {9, 2,7},
        {10, 2,2},
        {11, 2,5},
        {12, 2,1},

    };
    cout << "The 2D array is:" << endl;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}