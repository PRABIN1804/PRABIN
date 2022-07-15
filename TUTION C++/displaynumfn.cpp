#include <iostream>
using namespace std;
//displaying number
void displaynum(int num1,float num2)
{
    cout<< "the int number is " <<num1 <<endl;
    cout<< "the float number is " << num2;
}
int main()
{
    int num1 =11;
    float num2 =15.5;
    //function calling
    displaynum(num1,num2);
    return 0;
}