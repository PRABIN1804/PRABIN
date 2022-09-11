#include <iostream>
using namespace std;
class sample
{
    protected:
};
class sample : public sample
{
    public:
    int age;
    void displayage(int a)
    {
        age=a;
        cout<<"age="<<age<<endl;
    }
};
int main()
{
int ageinput;
sample child;
cout<<"enter your age:";
cin>>ageinput;
child.displayage(ageinput);
return 0;
}