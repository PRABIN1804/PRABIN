#include<iostream>
using namespace std;
int main()
{
    int marks =80,*ptr;
    ptr = &marks;
    cout<< " addresss of marks"<<ptr<<endl;
    cout<<" value of marks "<<*ptr<<endl;
    return 0;
}