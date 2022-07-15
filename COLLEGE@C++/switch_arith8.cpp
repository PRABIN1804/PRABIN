#include <iostream>
using namespace std;

int main()
{
    char op;
    int a,b;

    cout << " enter operators +,-,*,/" <<endl;
    cin >>op;
    cout << " enter operands \n" <<endl;
    cin >>a>>b;

    switch(op)
    {
        case '+':
        cout << a<< "+"<< b<< "="<<a+b <<endl;
break;

 case '-':
        cout << a<< "-"<< b<< "="<<a+b <<endl;
break;

 case '*':
        cout << a<< "*"<< b<< "="<<a+b <<endl;
break;

 case '/':
        cout << a<< "/"<< b<< "="<<a+b <<endl;
break;
    
     default:
     cout << " ERROR!!!" <<endl;
     break;
    }
    return 0;
}