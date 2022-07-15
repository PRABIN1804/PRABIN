#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout <<" enter any three numbers"<< endl;
    cin>> a>>b>>c;

    if (a<b && a<c){
        cout<<a<< " is the smallest among three number "<< endl;
    }
    if (b<a && b<c){
        cout <<b<< " is the smallest among three numbers "<< endl;
    }
    else{
        cout <<c<< " is the smallest among three numbers"<< endl;
    }

    return 0;
}