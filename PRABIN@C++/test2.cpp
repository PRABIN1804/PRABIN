Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@PRABIN1804 
Coder-sam-007
/
Cpp-notes-and-programs
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
Cpp-notes-and-programs/friend and virtual funcs/virtual_base_class.cpp

Coder-sam-007 super organised
Latest commit be87851 25 days ago
 History
 0 contributors
57 lines (42 sloc)  1.22 KB

#include <iostream>
using namespace std;

class grandParent
{
public:
  void display()
  {
    cout << "Hello form Class grandParent \n";
  }
};

class parent1 : public virtual grandParent
{
};

class parent2 : public virtual grandParent
{
};

class child : public parent1, public parent2
{
};

int main()
{
  child object;
  object.display();
}

/*
virtual base class can be defined as a type of class that helps to prevent duplication of inherited data members in a combination of heirarchial and multiple inheritance.
syntax:
Class A:{
  .... ..... ....
};
class B: virtual public A {
  .... ..... ....
};
class C: public virtual A {
  .... ..... ....
};
*/

/* Need for Virtual Base Class in C++
In order to prevent the error and let the compiler work efficiently, we’ve to use a virtual base class when multiple inheritances occur. It saves space and avoids ambiguity.
When a class is specified as a virtual base class, it prevents duplication of its data members. Only one copy of its data members is shared by all the base classes that use the virtual base class.
If a virtual base class is not used, then all the derived classes will get duplicated data members. In this case, the compiler cannot decide which one to execute.
*/
