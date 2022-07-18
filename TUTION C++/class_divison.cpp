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
    void div()
    {
        cout << " division of two number is:" <<a/b <<endl;
    }
};
int main(){
    solve s;
    s.input();
    s.div();
    return 0;
}