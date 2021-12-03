//write a function to print  addition of 2 number  (no return value)funtion should have single parameter , call it in main function by passing single parameter.
//write a function to print  addition of 2 number ( no return value and no parameter), call it in main function.

#include <iostream>
using namespace std;
void add( int add1)
{
    int a, b,add;
    cout<<"Enter  first no"<<endl;
    cin>>a;
    cout<<"Enter second no"<<endl;
    cin>>b;
     add=a+b;
    cout<<"Addtion of two no:"<<add<<endl;


}
int main()
{
    int num;
    add(num);

    return 0;
    }
