#include<iostream>
using namespace std;


class Base1   // 4 byte
{
 public:
  int A;

  Base1()
  {
    cout<<"inside Base1 constructor\n";
     
  }

  ~Base1()
  {
    cout<<"Inside Base1 destructor\n";

  }

  void fun()
  {
    cout<<"Inside Base1 fun\n";
  }

};


class Base2   // 12 byte
{
 public:
  int I,J,K;

  Base2()
  {
    cout<<"inside Base2 constructor\n";
     
  }

  ~Base2()
  {
    cout<<"Inside Base2 destructor\n";

  }

  void gun()
  {
    cout<<"Inside Base2 gun\n";
  }

};

//Not allowed in java

class Derived : public Base1, public Base2    // 24 byte
{
 public:
  int X,Y;

  Derived()
  {
    cout<<"inside Derived constructor\n";
     
  }

  ~Derived()
  {
    cout<<"Inside Derived destructor\n";

  }

  void sun()
  {
    cout<<"Inside Derived sun\n";
  }

};

int main()
{
 Derived dobj;

  dobj.fun();   //Base1
  dobj.gun();   //Base2
  dobj.sun();   //Derived
  
  return 0;
}