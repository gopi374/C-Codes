//loops is used to perform repeatation of task .
// loops are two types - 
// 1.Entry controlled loop-: In this type of loop condition check at starting then loop will work if condition is true.
// i-for loop 
// ii. while loop
// 2. Exit control loop -: In this type  of loops condition is check at the time of exit .
// do-while loop


#include<iostream>
using namespace std;
int main()
{
    
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=4);
    return 0;
}