#include <iostream>
using namespace std;
class solve
{
    int a,b;
    public:
    void input(){
        cout << " enter two integers" <<endl;
        cin >>a>>b;
    }
    void mul()
    {
        cout << " multiply of two number is:" <<a*b <<endl;
    }
};
int main(){
    solve s;
    s.input();
    s.mul();
    return 0;
}