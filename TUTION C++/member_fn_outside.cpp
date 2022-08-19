#include <iostream>
using namespace std;
class add 
{
    private:
    int a,b,c;
    public:
    void sum();
};
void add::sum()
{
    cout<<"enter 2 values:"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"sum is:"<<c<<endl;
}
int main()
{
    add p;
    p.sum();
    return 0;
}