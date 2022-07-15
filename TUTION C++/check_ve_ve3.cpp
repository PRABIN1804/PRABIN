#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: " <<endl;666
    cin  >> &num; 
    if (num <= 0.0) {
        if (num == 0.0)
            cout << "You entered 0" <<endl;
        else
            cout <<"You entered a negative number" <<endl;
    } 
    else
        cout << "You entered a positive number." <<endl;
    return 0;
}