#include <iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<" hello from A"<<endl;
    }
};
class B:public virtual A{
};
class C:public virtual B{
};
class D: public B,public C{
};
int main()
{
    A object;
    object.show();
    return 0;
}
