#include <iostream>
using namespace std;
class Distance
{
   int feet;
   float inches;

public:
   Distance(int x, float y)
   {
      feet = x;
      inches = y;
      feet = feet + inches / 12;
      int i = inches / 12;
      inches = inches - 12 * i;
      cout << "\n Feet:" << feet;
      cout << "\n Inches:" << inches;
   }
};
int main()
{
   Distance obj(40, 69.999);
   return 0;
}
