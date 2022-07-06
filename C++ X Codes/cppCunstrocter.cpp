#include<iostream>
using namespace std;

class sum
{
  int a,b;
  public:
  sum()
  {
    a=50;
    b=100;
  }
  void putdata()
  {
   cout<<"Sum is :"<<a+b;
  }
};

int main()
{
  sum s1;

  
  s1.putdata();

  return 0;
}