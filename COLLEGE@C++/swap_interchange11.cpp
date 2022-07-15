#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout << " enter two number to swap \n" <<endl;
    cin >> a >>b;

    temp = a;
    a = b;
    b = temp;

    cout << " after swapping the numbers is \n " <<endl;
    cout << a << "" <<b <<endl;
    return 0;
}