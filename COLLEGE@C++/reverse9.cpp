#include <iostream>
using namespace std;

int reverse()
{
    int  a,b,r=0;
    cout << " enter a number to reverse it \n " <<endl;
    cin >> a;

    while(a != 0){
        b= a%10;
        a=a/10;
        r=r*10+b;
    }
    cout << " reversed number is:"<<r <<endl;
    return 0;
}

//sum of reverse number

int sum(){
int n,r,s=0;
while(n>0){
    r=n%10;
    n=n/10;
    s=s+r;
}
cout<<"the sum is:" <<s<<endl;
;
}
int main()
{
int n;
reverse();
sum();
return 0;
}