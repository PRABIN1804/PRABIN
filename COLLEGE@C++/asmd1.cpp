#include <iostream>
using namespace std;

int main()
{
    int a,b,add,sub, mul,div;
    cout << " enter any two numbers \n ";
    cin >> a>>b;
    add= a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    cout << " addtion of two numbers is \n" <<add;
    cout << "substraction of two numbers is \n"<<sub;
    cout << " multiplication of two numbers is \n"<<mul;
    cout << " division of two numbers is \n"<<div;
    
    return 0;
}