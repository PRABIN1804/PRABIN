#include <iostream>
using namespace std;
class solve
{
    int x,y;
    public:
    void input(){
        cout << " enter two integers" <<endl;
        cin >>x>>y;
    }
    void mod()
    {
        cout << " modulus of two number is:" <<x%y <<endl;
    }
};
int main(){
    solve s;
    s.input();
    s.mod();
    return 0;
}