// Array is a data structure that stores a collection of elements, typically of the same data type, in a contiguous block of memory. 
//Arrays allow you to store multiple values under a single variable name, making it easier to manage large sets of data.
//Each element in the array is identified by an index or a key.



//            2D array

#include<iostream>
using namespace std;

int main() {
    int arr[4][2] = {{1, 2}, {3, 4}, {4, 3}, {2, 1}};

    for (int i = 0; i < 4; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        {  
            cout << arr[i][j] << " ";  
        }
        cout << endl;  
    }

    return 0;
}
