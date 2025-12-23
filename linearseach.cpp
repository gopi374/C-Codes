#include<iostream>
using namespace std;


void linearSearch(int arr[], int size, int key) { 

    for(int i = 0; i < size; i++){         
        if(arr[i] == key) {             
            cout << "Element found at index: " << i << endl; 
            return; 
        } 
    } 
    cout << "Element not found!" << endl; 
} 
int main() { 
    int arr[10], key, n, i;     
    cout << "Enter the number of elements: ";     
    cin >> n;     
    cout << "Enter the elements: ";     
    for(i = 0; i < n; i++) {         
        cin >> arr[i]; 

    } 
    cout << "Enter the element to search: ";     
    cin >> key;     
    linearSearch(arr, n, key); 
    return 0;  
} 
