#include <iostream>
using namespace std;

int main()
{
    //what is a pointer---->data type which holds the address of other data types.

    int a=5;
    int *b;
    b=&a;

    //&---->(Address of) Operator
    cout<<"the address of a is " <<&a<<endl;
    cout<<"the address of a is " <<b<<endl;

    //*---->(value at) Dereference Operator
    cout<<"the value at address b is " <<*b<<endl;

    //Pointer to pointer
    int **c=&b;
    cout<<" the address of b is " <<&b<<endl;
    cout<<" the address of b is " <<c<<endl;
    cout<<" the value at address c is " <<*c<<endl;
    cout<<" the value at address value_at(value_at(c)) is " <<**c<<endl;
    return 0;
}