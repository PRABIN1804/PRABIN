#include <iostream>
using namespace std;
int vowelorconsonant(char x)
{
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
 cout << "vowel" <<endl;
 else
 cout << " consonant" <<endl;
    return 0;
}
int main()
{
    vowelorconsonant('a');
    vowelorconsonant('z');
    return 0;
}