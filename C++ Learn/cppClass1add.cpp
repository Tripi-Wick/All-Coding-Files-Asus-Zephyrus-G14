#include<iostream>
using namespace std;

class sum
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
   cout<<"Sum is :"<<a+b;
  }
};

int main()
{
  sum s1;

  s1.getdata();
  s1.putdata();

  return 0;

}