//             Binary Search algorithm is used to find targeted value in sorted array. this Searching technique only works when array is sorted.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;          // element found
        else if (arr[mid] < target)
            low = mid + 1;       // search right half
        else
            high = mid - 1;      // search left half
    }
    return -1;   // element not found
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
