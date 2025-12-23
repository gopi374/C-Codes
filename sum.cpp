#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"enter the digit  :";
    cin>>a;
    while (a!=0)
    {
        sum +=a %10;
        a /=10;
    }
    
    cout<<"sum of digit is :"<<sum;
    return 0;
}