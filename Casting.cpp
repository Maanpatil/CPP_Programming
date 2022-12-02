#include<iostream>
using namespace std;

class Base
{
  public:
  int A,B;

};

class Derived : public Base
{
  public:
  int X,Y;

};


int main()
{
  Base * bp = NULL;
  Derved *dp = NULL;

  Base bobj;
  derived dobj;

  bp = &bobj;  // No casting          Allowed
  dp = &dobj;  // No casting          Allowed
  bp = &dobj;  // UP casting          Allowed
  dp = &dobj;  // Down casting    Not Allowed


  return 0;
}