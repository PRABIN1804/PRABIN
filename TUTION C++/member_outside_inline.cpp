#include <iostream>
using namespace std;
class s
{
    public:
    int square(int a);
};
inline int s::square(int a)
{
    return a*a;
}
int main()
{
    s ob;
    cout<<"square of a number is:"<<ob.square(5);
    return 0;
}