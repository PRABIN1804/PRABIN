#include<iostream>
using namespace std;
class add{
    private:
    int a,b,c ;
    public:
    void sum(){
    cout <<"enter two values: ";
    cin >> a >>b ;
    c=a+b ;
cout <<"sum is =" <<c ;
    }
};
int  main(){
    add p;
    p.sum();
return 0;
}