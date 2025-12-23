#include<iostream>

using namespace std;
/*int fun(int a, int b)
{
    int c = a*b;
    return c;
}
int main(){
    int d,c;
    cout<<"Any number :";
    cin>>d;
    cout<<"Any number :";
    cin>>c;
    int result =fun(d,c);
    cout<<"Total :"<<result;
    return 0;
}

int main()
{
    int a=10;
    for(int i = 0; i<a; i++){
        cout<<"*"<<endl;
        i;
    }
    return 0;
}

int main(){
    int a ,reverse=0,temp;
    cout<<"Enter the number :";
    cin>>a;
    temp = a;
    do{
        int digit=a / 10;
        reverse= reverse * 10 +digit;
        temp= reverse;
    }while(a!=0);

    cout<<temp;
    return 0;
}

int main()
{
    int ar[3][3]={(1,2,3),
                  (3,4,2),
                  (5,6,5)};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;    
    }
    return 0;
}
// pointers 

int main(){
    int var=100;
    int *ptr= &var;
    cout<<"value of var :"<<var<<endl;
    cout<<"address of var :"<<&var<<endl;
    cout<<"value of ptr :"<<ptr<<endl;

    cout<<"addres of ptr :"<<*ptr<<endl;
    var =120;
    cout<<"new value :"<<var;
    return 0;
}
int main(){
    char arr[1][2]={("HELLO WORLD India is the largest country of world "),("i love india")};
    for(int i =0 ; i<arr[i]; i++)
    {
        for(int j = 0; j<arr[j]; j++){
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int arr,ele;
    cout <<"Enter size :";
    cin>>arr;
    cout <<"Enter element :";
    cin>>ele;
    int var[arr][ele];
    // int arr[2][3]={
    //     {1,2,5},
    //     {3,4,6}
    // };
    for (int i = 0; i < arr; i++) {
        for (int j = 0; j < ele; j++)
        {
            cout << var[i][j] << " ";
        }
    cout << endl; // Move to the next row
    }
    return 0;
}
int main(){
    float pi=3.14,r;
    cout<<"Enter the radius of circle :";
    cin>>r;
    cout<<"Area of circle :"<<pi*r*r;
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the num:";
    cin>>n;
    int i=1;
    do{
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
        i++;
    }while(i<=10);
    return 0;
}
int main(){
    int a,s,d;
    cout<<"Enter nimvrr :";
    cin>>a>>s>>d;
    if(a>s && a>d){
        cout<<"grater num is"<<a;
    } 
    else if(s>a && s>d){
        cout<<"greater num is"<<s;
    }
    else
    {
        cout<<"greater num is"<<d; 
    }
    return 0;
}
int main(){
    int a;
    cout<<"Enter the number :";
    cin>>a;
    if(a/2 ==0){
        cout<<"number is even";
    }
    else
    {
        cout<<"the number is odd";
    }
    return 0;
}
int  main(){
    for(int i = 1; i<=10; i--){
        cout<<i<<endl;
    }
    return 0;
}
int greet(){     // no argu or no return 
    cout<<"hello coding";
}
int vlue(){   //no argu return value
    int a=30;
    int b=3;
    int c=a+b;
    cout<<c;
}
int mla(int a,int b){  // argument with return value
    return a+b;
}
int main(){
    int A,S;
    greet();
    vlue();
    // cout<<"\nEnter two number :";
    // cin>>A>>S;
    // int result=mla(A,S);
    // cout<<"operation successfull :"<<result;
    return 0;
}
int main(){
    int a;
    cin>>a;
    while(a<=10){
        cout<<a;
        a++;
    }
    return 0;
}*/