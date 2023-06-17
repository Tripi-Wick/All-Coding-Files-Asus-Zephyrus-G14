#include <iostream>
#include <math.h>
using namespace std;

class Polynomial{
    public:
        int coff;
        int expo;
};
class info_Polynomial{
    private:
        int t_non_zero_elm;
        Polynomial* p;
    public:
        ~info_Polynomial(){
            delete[]p;
        }
        info_Polynomial(int num){
            t_non_zero_elm = num;
            p = new Polynomial[num];
        }
        int evaluate(int x){
            int sum=0;
            for(int i=0; i<t_non_zero_elm; i++){
               sum += (p[i].coff * pow(x,p[i].expo));
            }
            return sum;
        }
        friend istream& operator>>(istream& is, info_Polynomial& p);
        friend ostream& operator<<(ostream& os, info_Polynomial& p);
        info_Polynomial operator+( info_Polynomial& b){
            info_Polynomial* res = new info_Polynomial(t_non_zero_elm+b.t_non_zero_elm);
            int i,j,k;
            i=j=k=0;
            while(i<t_non_zero_elm && j<b.t_non_zero_elm){
                if(p[i].expo==b.p[j].expo){
                    res->p[k]=p[i];
                    res->p[k++].coff=p[i++].coff+b.p[j++].coff;
                }
                else if(p[i].expo>b.p[j].expo){
                    res->p[k++]=p[i++];
                }
                else if(p[i].expo<b.p[j].expo){
                    res->p[k++]=b.p[j++];
                }
            }
            for(;i<t_non_zero_elm;i++){
                res->p[k++]=p[i];
            }
            for(;j<b.t_non_zero_elm;j++){
                res->p[k++]=b.p[j];
            }
            res->t_non_zero_elm=k;
            return *res;
        }
};
istream& operator>>(istream& is, info_Polynomial& p){
cout<<"_________Enter the non Zero elements_________"<<endl;
    cout<<"Coefficient Exponent"<<endl;
    for(int i=0; i<p.t_non_zero_elm; i++){
        cin>>p.p[i].coff>>p.p[i].expo;
    }
}
ostream& operator<<(ostream& os, info_Polynomial& p){
for(int i=0; i<p.t_non_zero_elm; i++){
        if(i==p.t_non_zero_elm-1){cout<<p.p[i].coff<<"X"<<p.p[i].expo;}
        else cout<<p.p[i].coff<<"X"<<p.p[i].expo<<"+";
    }
}
int main()
{
    int a,b;
    cout<<"Enter the total number of non zero element in polynomial 1 : ";
    cin>>a;
    cout<<"Enter the total number of non zero element in polynomial 2 : ";
    cin>>b;

    info_Polynomial p1(a);
    info_Polynomial p2(b);

    cin>>p1;
    cin>>p2;

    cout<<p1.evaluate(2)<<endl;
    cout<<"   "<<endl;
    cout<<p2.evaluate(2)<<endl;
    cout<<"   "<<endl;

    info_Polynomial p3 = p1+p2;
    
    cout<<"The first Polynomial : "<<endl<<p1;
    cout<<endl;
    cout<<"The second Polynomial : "<<endl<<p2;
    cout<<endl;
    cout<<"The sum Polynomial : "<<endl<<p3;

    return 0;
}