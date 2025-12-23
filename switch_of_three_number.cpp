#include<iostream>
using namespace std;
int main()
{
    int a,s,d;
    cout<<"Enter the numbers :";
    cin>>a>>s>>d;
    if(a>=s and a>=d){
        cout<<"greater number is :"<<a;
    }
    else if(s>=a and s>=d){
        cout<<"greater number is :"<<s;
    }
    else 
    {
        cout<<"greateer number is :"<<d;
    }
    return 0;
}