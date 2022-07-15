#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3;
    cout<< " enter three numbers";
    cin>> n1 >> n2>> n3 ;

    if (n1>=n2){
        if (n1>=n3)
        cout << " largest number" << n1;
        else
        cout<<" largest number"<<n3;
    }
else{
    if ( n2>=n3)
    cout << " largest number" << n2;
    else
    cout << " largest number " << n3;
}
    return 0;
}