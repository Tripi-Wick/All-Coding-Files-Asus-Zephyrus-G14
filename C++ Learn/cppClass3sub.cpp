#include<iostream>
using namespace std;

class subtract
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
   cout<<"difference is :"<<a-b;
  }
};

int main()
{
  subtract s1;

  s1.getdata();
  s1.putdata();

  return 0;

}
