#include <iostream>
using namespace std;

int main()
{
    //array example
    int marks[]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=2278;
    mathmarks[1]=738;
    mathmarks[2]=378;
    mathmarks[3]=578;

    cout <<"these are math marks"<<endl;
    cout <<mathmarks[0]<<endl;
    cout <<mathmarks[1]<<endl;
    cout <<mathmarks[2]<<endl;
    cout <<mathmarks[3]<<endl;

     //you can change the value of an array

     marks[2]=455;
     //cout <<marks[0]<<endl;
     //cout <<marks[1]<<endl;
     //cout <<marks[2]<<endl;
     //cout <<marks[3]<<endl;

for (int i=0;i<4;i++)
{
    cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
}

//quick quiz: do the same using while and do-while loops?

//pointers and arrays
int *p=marks;
cout <<*(p++)<<endl;
cout <<*(++p)<<endl;
//cout <<"the value of *p is"<<*p<<endl;
//cout << " the value of (p+1) is"<<*(p+1)<<endl;
//cout << " the value of (p+2) is"<<*(p+2)<<endl;
//cout << " the value of (p+3) is"<<*(p+3)<<endl;
     return 0;
}