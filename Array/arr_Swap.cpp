#include <iostream>
using namespace std;

int main() {
    //user input array Swaping numbers
    int arr[10], n, s;
    cout<<"Enter the number of elements in array :";
    cin>>n;
    cout<<"Enter the elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Old array is :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the place where you want to change :";
    cin>>s;
    cout<<"Enter the new elements :";
    cin>>arr[s];
    cout<<"the new array is ";
    for(int i=0;i<n;i=i+1)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
