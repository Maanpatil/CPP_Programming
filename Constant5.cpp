#include<iostream>
using namespace std;


class Demo
{
  public:
  int i;
  const int j; 

  // parameterised constructor with DEFAULT values
  Demo(int x = 10, int y = 20) : j(y)
  {
    i = x;
  
  }

  void fun()
  {
    int a = 10;
    const int b = 20;   // constant varialble
    i++;  // A
    j++;   // NA due to line 9 
    a++;   // A due to line 20
    b++;   // NA due to 21

  }

  void gun() const    // constant behaviour
  {
    int a = 10;
    const int b = 20;
    i++;   // NA due to line 29 const word
    j++;   // NA due to line 8 & 29 const word
    a++;   // A due to line 31 
    b++;   // NA due to line 26
  }

 
};

int main()
{
  
  Demo obj1(11,21);     // 11  20
  const Demo obj2(11,21);  // 11  21    constant object

  obj1.fun(); // A
  obj1.gun(); // A
  obj2.fun(); // NA
  obj2.gun(); // A

  obj1.i++; // A
  obj1.j++; // NA
  obj2.i++; // NA
  obj2.j++; // NA
  return 0;
}