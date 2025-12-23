#include<iostream>
using namespace std;
int main()
{
    int  num1,num2,result;
    char p;
    cout<<"Enter the number :";
    cin>>num1;
    cout<<"Enter any operation +,-,*./";
    cin>>p;
    cout<<"Enter the 2 number :";
    cin>>num2;
    switch (p)
    { case '+':
    result=num1+num2;
    cout<<"add is :"<<result;
    break;
    case '-':
    result=num1-num2;
    cout<<"sub is "<<result;
    break;
    case '*':
    result=num1*num2;
    if (result>100)
    {
        cout<<"multiply value is greater than 100:"<<result;
    }
    else
    {
        cout<<"mutiply value is not greater then 100";
    }
    break;
    case '/':
    result=num1/num2;
    cout<<"divide is"<<result;
    break;
    default:
    cout<<"you have not enter a right operation";    
    }
    return 0;
}