#include<iostream>
using namespace std;
int add(int a , int b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}
int main()
{
    cout<<"sum = "<<add(2,3)<<endl;
    cout<<"sum = "<<add(2.5,5.5)<<endl;
    return 0;
}
