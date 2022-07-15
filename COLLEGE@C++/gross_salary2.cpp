#include <iostream>
using namespace std;

int main()
{
    float basic,gross,da,hra;
    cout<< " enter basic salary of Prabin"<<endl;
    cin>> basic;

    da= basic*0.4;
    hra=basic*0.2;
    gross =basic+da+hra;

    cout << " da is "<< da<< endl;
    cout << " hra is "<< hra <<endl;
    cout << "gross salary="<<gross<<endl;
    return 0;
}