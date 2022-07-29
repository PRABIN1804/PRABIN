#include <iostream>
using namespace std;
class sample
{
    int i,j;
    public:
    sample(int a,int b)
    {
        i=a;
        j=b;
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
    sample s1( 4,5);
    s1.print();
    return 0;

}