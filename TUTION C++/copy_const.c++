#include<iostream>
using namespace std;
class sample
{
    public:
    int i,j;
    sample(int a,int b)
    {
        a=i;
        b=j;
    }
    sample(sample &s)
    {
        j=s.j;
        i=s.i;
    cout<<"copy constructor working"<<endl;
    }
    void print(void)
    {
    cout<<j<<i<<endl;
    }
};
int main()
{
    sample s1(4,5);
      s1.print();
    return 0;
}
