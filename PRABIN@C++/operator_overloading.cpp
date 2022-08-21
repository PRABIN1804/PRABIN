#include <iostream>
using namespace std;
class sumoverload
{
    private:
    int a,b;
    public:
    void distance()
    {
    a=0;b=0;
    }
    sumoverload(int f,int i)
    {
        int c;
        a=f;
        b=i;
        c=a+b;
        cout <<"C:"<<c<<endl;
    }
    void display()
    {
        cout<<"A:"<<a<<"B:"<<b<<endl;
    }
    sumoverload operator +()
    {
        a=-a;b=-b;
        return sumoverload(a,b);
    }
};

int main()
{
    sumoverload s1(5,8), s2(-3,-5);
    +s1; s1.display();
    +s2; s2.display();
    return 0;
}