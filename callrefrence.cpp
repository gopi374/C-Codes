#include<iostream>
using namespace std;

int modifyValue(int &num) 
 { 
    num = num * 2;       
    cout << "Inside function (modified value): " << num << endl; 
} 
int main() 
{   int x = 5;     
    cout << "Before function call (original value): " << x << endl;     
    modifyValue(x);       
    cout << "After function call (original value): " << x << endl;       
    return 0;   
} 
