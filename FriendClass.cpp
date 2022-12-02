#include<iostream>
using namespace std;

class Marvellous
{
   public :
    void fun();  // Member function 
    void gun();  // Member function
};


class Demo
{
  public :
    int i;
  private :
    int j;
  protected :
    int k;
  public :
    Demo()
    {
     i = 10;
     j = 20;
     k = 30;
    }

  friend class Marvellous;
  
};

void Marvellous::fun()   //  Mamber function
{

  Demo obj;
  cout<<"Value of fun i : "<<obj.i<<"\n";
  cout<<"Value of fun j : "<<obj.j<<"\n";
  cout<<"Value of fun k : "<<obj.k<<"\n";

};

void Marvellous::gun()   // Member function
{

  Demo obj;
  cout<<"Value of gun i : "<<obj.i<<"\n";
  cout<<"Value of gun j : "<<obj.j<<"\n";
  cout<<"Value of gun k : "<<obj.k<<"\n";

};

int main()
{
  Marvellous mobj;
  mobj.fun();
  mobj.gun();

  return 0;

}