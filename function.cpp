#include<iostream>
using namespace std;
int add(int c,int d)
{
    int f=c+d;
    return f;
}
/*int subtract(int c,int d)
{
    int f=c-d;
    return f;
}
int mul(int c,int d)
{
    int f=c*d;
    return f;
}
int div(int m,int n)
{
    int f=m/n;
    return f;
}*/
int main()
{
    int a,b;
    cout<<"Entr :";
    cin>>a;
    cout<<"Entr :";
    cin>>b;
    int result=add(a,b);
  /*  int results=subtract(a,b);
    int resultm=mul(a,b);
    int resultd=div(a,b);*/
    cout<<"total of addition:"<<result<<endl;
  /*  cout<<"total of substraction :"<<results<<endl;
    cout<<"total of multiplication:"<<resultm<<endl;
    cout<<"total of division :"<<resultd;*/
    return 0;

}