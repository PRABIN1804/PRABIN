#include <iostream>
using namespace std;
class circle
{
    private:
    float r,a,pi;
    public:
    void area()
    {
        pi=3.14;
        cout<<"enter the radius of circle"<<endl;
        cin>>r;
        a=pi*r*r;
        cout<<"area of the circle is:"<<a<<endl;
    }
};
int main()
{
    circle c;
    c.area();
    return 0;
}