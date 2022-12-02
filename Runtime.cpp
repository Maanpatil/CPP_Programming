#include<iostream>
using namespace std;


class Base
{
  public:           // access specifier
  int A,B;
  
  void fun()        // Function Defination    1000    
  {
    cout<<"Base fun\n";
  }
  
  void gun(int i)      // Function Defination 2000
  {
    cout<<"Base gun with one integer\n";
  }

   void gun(int i, int j)     // Overloaded Function Defination  3000        
  {
    cout<<"Base gun overloaded with two integer\n";
  }


};

class Derived : public Base 
{
  public:
    int X,Y;
    void sun()
    {

        cout<<"Derived sun\n";  // Function defination   4000
    }

    void fun()
    {
        cout<<"Derived fun\n";    // Function Redefination   5000
    }



};


int main()
{
 Derived dobj;
 dobj.fun();    // 5000
 dobj.gun(11);   //2000
 dobj.gun(11,21);  //3000
 dobj.sun();  // 4000



    return 0;
}