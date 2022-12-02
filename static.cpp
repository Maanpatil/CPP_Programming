#include<iostream>

using namespace std;

class Demo
{
   public:
      int i;
      int j;
      static int k;


};

int main()
{
  Demo obj1;
  Demo obj2;

  cout<<sizeof(obj2);

  return 0;
}