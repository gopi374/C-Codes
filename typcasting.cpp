#include<iostream>
using namespace std;
int main()
{
    double b=20.98;  //implicit typcasting
    int s;
    s = b;
    cout<<s;

    double c=10.14;
    int x;
    x=int(c);
    cout<<"\n"<<x;  // Explicit typcasting
    
    return 0 ;
}