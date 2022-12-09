#include <iostream>
using namespace std;

class sus{
    private:
        int a,b;
    public:
        sus(void){
            a=0;
            b=0;
        }

        sus(int x){
            a = x;
            b = 0;
        }

        sus(int x, int y){
            a = x;
            b = y;
        }
        
        void display(void){
            cout<<"a = "<<a<<" & b = "<<b<<endl;
        }
};

int main()
{
    sus c1,c2,c3;

    c2 = sus(1);
    c3 = sus(2,3);

    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}