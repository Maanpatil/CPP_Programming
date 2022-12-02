#include<iostream>
using namespace std;



class Demo
{
  public:
    int A,B;
    
    Demo(int i = 0, int j = 0)
    {
      A = i;
      B = j;
    }



};

int main()
{

  Demo A(10,20);     //  0    0 
  Demo B(30,40);     //  11   0
  Demo Ans(0,0);       //  11   21

  Ans = A + B;

  return 0;
}