#include <iostream>
using namespace std;
class room
{
    int length;
    int breadth;
    public:
    void get data()
    {
        cout<<"enter length and breadth"<<endl;
        cin>>length>>breadth;
    }
    void area()
    {
        cout<<"the area of the room is:"<<length*breadth;
    }
};
int main()
{
    room r[5];
    for(int i=0;i<5;i++)
    {
        r[i].get data();
        r[i].area();
    }
    return 0;
}