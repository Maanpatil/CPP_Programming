#include<iostream>
using namespace std;

// call by value
void fun(int no)
{
  cout<<"Inside call by value :"<<no<<"\n";
  no++;   // value of i will not change bcoz its local variable of main function
}

// call by address
void gun(int *p)
{
  cout<<"Inside call by address :"<<*p<<"\n";
  (*p)++;  // value of j will change to 11 bcoz its call by adress     
}

// call by refrence
void sun(int &ref)
{
  cout<<"Inside call by refrence :"<<ref<<"\n";
  ref++;  // value of k will change to 11 bcoz its call by refrence 
}


int main()
{
  int i = 10;
  int j = 10;
  int k = 10;

  fun(i);    // fun(10);
  cout<<i<<"\n";
  gun(&j);   // gun(200);
  cout<j<<"\n";
  sun(k);    // sun(k);
  cout<<k<<"\n";

  return 0;
}