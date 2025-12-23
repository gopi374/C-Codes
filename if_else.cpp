#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"this program is developed by Er.gopi\n";
    cout<<"program for nested if else.\n";
    cout<<"Enter your marks of 12th class\n ";
    cin>>num;
    if (num>90)
    {
        cout<<"Excellent";
    }
    else if (num>80)
    {
        cout<<"good";
    }
    else if (num>70)
    {
        cout<<"average";
    }
    return 0;      
}