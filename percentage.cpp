#include<iostream>
using namespace std;
int main()
{
    float total,m,p,c,h,e;
    cout<<"Enter the marks of physics :";
    cin>>p;
    cout<<"Enter the marks of chemistry :";
    cin>>c;
    cout<<"Enter the marks of maths :";
    cin>>m;
    cout<<"Enter the marks of hindi :";
    cin>>h;
    cout<<"Enter the marks of english :";
    cin>>e;
    total=(m+p+c+h+e)/5;
    cout<<"Your pecentage is :"<<total<<"%"<<endl;
    if (total>90)
    {
        cout<<"excellent";
    }
    else
    {
        if (total>80)
        {
            cout<<"\ngood";
        }
        else
        { 
            if (total>70)
            {
                cout<<"average";
            }
            else
            {
                cout<<"Need to work hard";
            }

        }
    }
    return 0;

}