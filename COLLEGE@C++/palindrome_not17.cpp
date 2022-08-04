#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout <<"enter a positive number"<<endl;
    cin>>num;
    n=num;
    do{
    digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;
    }
    while(n!=0);
    cout<<"the reverse of the number is:"<<rev<<endl;
    if(n==rev)
    cout<<"the number is palindrome"<<endl;
    else
    cout<<"the number is not palindrome"<<endl;
    return 0;
}