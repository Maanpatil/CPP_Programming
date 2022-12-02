 #include<iostream>
using namespace std;

class Circle
{
 public:  // access Specifier
    float PI;   //Characteristics
    float Radius;  // chracteristics

    Circle()    // Default Constructor
    {
      PI = 3.14;
      Radius = 0.0;
    }
    Circle(float A, float B)   //Parameterised constructor
    {
       PI = A;
       Radius = B;
    }
    void Display()     // concrete Method   1000
    {
      cout<<"Value of radius is : "<<Radius<<"\n";
    }
    virtual float Area() = 0;     // Abstract method   no address
    virtual float Circumfarance() = 0;   // Abstract Method    no address
};

class Marvellous : public Circle
{

  public:
    Marvellous() : Circle()
    {

    }
    Marvellous(float X, float Y) : Circle(X,Y)
    {

    }
     float Area()   // Here Abstract method converted to Concrete method    2000
     {
       float Ans = PI * Radius * Radius;
       return Ans;

     }

     float Circumfarance()    // Here Abstract method converted to Concrete method   3000
     {
       float Ans = 0.0;
       Ans = 2 * PI * Radius;
       
       return Ans;
     }
   



};


int main()
{
 Marvellous mobj1;
 Marvellous mobj2(3.14,10.89);
 
 float fret = 0.0;

 fret = mobj2.Area();
 cout<<"Area is : "<<fret<<"\n";

 
 fret = mobj2.Circumfarance();
 cout<<"Circumfarance is : "<<fret<<"\n";

  return 0;
}