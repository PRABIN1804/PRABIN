#include<iostream>
using namespace std;
int main()
{
int divisor,dividend,quotient,remainder;
cout<< "enter dividend";
cin>> dividend;
cout<< "enter divisor";
cin>> divisor;
quotient=dividend/divisor;
remainder=dividend%divisor;
cout<< "quotient=" << quotient << endl;
cout<< " remainder=" << remainder;
return 0;
}