#include <iostream>
using namespace std;

class SimpleCalculator{
    protected :
        int n1,n2;
    public:    
        int sum(){
            cout<<"Enter the First Number : ";
            cin>>n1;
            cout<<"Enter the Second Number : ";
            cin>>n2;
            int res;
            res = n1 + n2;
            return res;  
        }

        int mul(){
            cout<<"Enter the First Number : ";
            cin>>n1;
            cout<<"Enter the Second Number : ";
            cin>>n2;
            int res;
            res = n1 * n2;
            return res;  
        }

        int sub(){
            cout<<"Enter the First Number : ";
            cin>>n1;
            cout<<"Enter the Second Number : ";
            cin>>n2;
            int res;
            res = n1 - n2;
            return res;  
        }
        
        int div(){
            cout<<"Enter the First Number : ";
            cin>>n1;
            cout<<"Enter the Second Number : ";
            cin>>n2;
            int res;
            res = n1 % n2;
            return res;  
        }
};

class ScientificCalculator{
    protected:
        int n1,n2;
    public:
        int power(){
            cout<<"Enter the  Number : ";
            cin>>n1;
            cout<<"Enter the Power: ";
            cin>>n2;
            int res = 1;
            for(int i=0; i<n2; i++){
                res*=n1;
            }
            return res;  
        }
        int sqRoot(){
            cout<<"Enter the Number : ";
            cin>>n1;
            int res;
            for(int i=1; i<=n1; i++){
                int n;
                n=i*i;
                if(n==n1){
                    cout<<"The square root of n1 is = "<<i<<endl;
                    res=i;
                }
            }
            return res;  
        }
        int cubeRoot(){
            cout<<"Enter the Number : ";
            cin>>n1;
            int res;
            for(int i=1; i<=n1; i++){
                int n;
                n=i*i*i;
                if(n==n1){
                    cout<<"The cube root of n1 is = "<<i<<endl;
                    res=i;
                }
            }
            return res;  
        }
        int exponent(){
            cout<<"Enter the Number : ";
            cin>>n1;
            int res=1;
            for(int i=1; i<=n1; i++){
                res*=2.71; 
            }
            return res;  
        }
};

class HybridCalculator : protected ScientificCalculator , protected SimpleCalculator {
    public:
    void operation(){
            int opp;
            cout<<"Enter the operation you would like to perform on these numbers {1=sum, 2=sub, 3=mul, 4=div, 5=pow, 6 = sqRoot, 7 = cube root, 8 = value of exponent} : ";
            cin>>opp;
            switch (opp){
                case 1 : cout<<"Answer = "<<sum()<<endl;break;    
                case 2 : cout<<"Answer = "<<sub()<<endl;break;    
                case 3 : cout<<"Answer = "<<mul()<<endl;break;    
                case 4 : cout<<"Answer = "<<div()<<endl;break;
                case 5 : cout<<"Answer = "<<power()<<endl;break;    
                case 6 : cout<<"Answer = "<<sqRoot()<<endl;break;    
                case 7 : cout<<"Answer = "<<cubeRoot()<<endl;break;    
                case 8 : cout<<"Answer = "<<exponent()<<endl;break;    
            }
        }
};

int main()
{
    HybridCalculator opp1;
    
    opp1.operation();

    return 0;
}