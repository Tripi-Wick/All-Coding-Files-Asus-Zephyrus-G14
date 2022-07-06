#include <iostream>
using namespace std;

class multiplication
{
  int a,b;
  public:
  void getdata()
  {
    cout<<"Enter values "<<endl;
    cin>>a>>b;
  }
  void putdata()
  {
   cout<<"multiplication is :"<<a*b;
  }
};

int main()
{
  multiplication s1;

  s1.getdata();
  s1.putdata();

  return 0;
  

}