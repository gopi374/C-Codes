#include<iostream>
using namespace std;
int main()
{
    int days,d;
    cout<<"Enter the total days in a year :";
    cin>>days;
    switch (1)
    case 1:
    if (days==366)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"this is not leap year days";
    }
   
    return 0;
}