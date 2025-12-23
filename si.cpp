#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float p,r,t,si,ci;
cout<<"\n program for calculate simple interest";
cout<<"\n Enter  value of principle amount :";
cin>>p;
cout<<"\n Enter the value of rate of Interest :";
cin>>r;
cout<<"\n Enter the time period :";
cin>>t;
si=(p*r*t)/100;
cout<<"\nthe SI is :"<<si;
ci=p*pow((1+r/100),t)-p;
cout<<"\nthe CI is :"<<ci;
return 0;
}