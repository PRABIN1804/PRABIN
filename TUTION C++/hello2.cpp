#include <iostream>
using namespace std;
class add{
    private:
    int a,b,c ;
    public:
    void sum();
};
int :: sum(){
    cout <<" enter 2 num";
    cin >> a >> b ;
    c =a+b ;
    cout << "sum is =" <<c ;
}
int main()
{
    add p;
    p.sum();
}