#include<iostream>
using namespace std;

class Overloading
{
   public:

   int Add(int a, int b)
   {
     cout<<"Addition of 2 integers\n";

   }

   float Add(float a, float b)
   {
     cout<<"Addition of float\n";

   }


   double Add(double a, double b)
   {
     cout<<"Addition of double\n";

   }

   int Add(int a, int b, int c)
   {
     cout<<"Addition of 3 integers\n";

   }
};


int main()
{

  Overloading obj;

  obj.Add(11,21);
  obj.Add(11,21,51);

  return 0;



}