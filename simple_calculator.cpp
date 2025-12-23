#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    
    float num1,num2,total;
    char operation;
    cout<<"Enter any  1st number :";
    cin>>num1;
    cout<<"Enter any  operation :";
    cin>>operation;
    cout<<"Enter any  2nd number :";
    cin>>num2;
    switch(operation){
    case '+':
    total=num1 + num2;
    cout<<"Total Addition :"<<total;
    break;
    case '-':
    total=num1 - num2;
    cout<<"Total Substraction :"<<total;
    break;
    case '*':
    total=num1 * num2;
    cout<<"Total multiplication :"<<total;
    break;
    case '/':
    total=num1 / num2;
    cout<<"Total Division :"<<total;
    break;
    default:
    cout<<"Enter any operation";
    }
    return 0;
}