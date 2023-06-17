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
        void input(){
            cout<<"_________Enter the non Zero elements_________"<<endl;
            cout<<"Coefficient Exponent"<<endl;
            for(int i=0; i<t_non_zero_elm; i++){
                cin>>p[i].coff>>p[i].expo;
            }
        }
        void display(){
            for(int i=0; i<t_non_zero_elm; i++){
                if(i==t_non_zero_elm-1){cout<<p[i].coff<<"X"<<p[i].expo;}
                else cout<<p[i].coff<<"X"<<p[i].expo<<"+";
            }
        }
        int evaluate(int x){
            int sum=0;
            for(int i=0; i<t_non_zero_elm; i++){
               sum += (p[i].coff * pow(x,p[i].expo));
            }
            return sum;
        }
        // info_Polynomial* sum(info_Polynomial& a, info_Polynomial& b){
        //     info_Polynomial* res = new info_Polynomial(a.t_non_zero_elm+b.t_non_zero_elm);
        //     int i,j,k;
        //     i=j=k=0;
        //     while(i<a.t_non_zero_elm && j<b.t_non_zero_elm){
        //         if(a.p[i].expo==b.p[j].expo){
        //             res->p[k++].coff=a.p[i++].coff+b.p[j++].coff;
        //         }
        //         else if(a.p[i].expo>b.p[j].expo){
        //             res->p[k++]=a.p[i++];
        //         }
        //         else if(a.p[i].expo<b.p[j].expo){
        //             res->p[k++]=b.p[j++];
        //         }
        //     }
        //     for(;i<a.t_non_zero_elm;i++){
        //         res->p[k++]=a.p[i];
        //     }
        //     for(;j<b.t_non_zero_elm;j++){
        //         res->p[k++]=a.p[j];
        //     }
        //     res->t_non_zero_elm=k;
        //     return res;
        // }
        friend info_Polynomial sum(info_Polynomial& a, info_Polynomial& b);
};
info_Polynomial sum(info_Polynomial& a, info_Polynomial& b){
    info_Polynomial res(a.t_non_zero_elm+b.t_non_zero_elm);
    int i,j,k;
    i=j=k=0;
    while(i<a.t_non_zero_elm && j<b.t_non_zero_elm){
        if(a.p[i].expo==b.p[j].expo){
            res.p[k]=a.p[i];
            res.p[k++].coff=a.p[i++].coff+b.p[j++].coff;
        }
        else if(a.p[i].expo>b.p[j].expo){
            res.p[k++]=a.p[i++];
        }
        else if(a.p[i].expo<b.p[j].expo){
            res.p[k++]=b.p[j++];
        }
    }
    for(;i<a.t_non_zero_elm;i++){
        res.p[k++]=a.p[i];
    }
    for(;j<b.t_non_zero_elm;j++){
        res.p[k++]=b.p[j];
    }
    res.t_non_zero_elm=k;
    return res;
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

    p1.input();
    p2.input();

    p1.display();
    cout<<"   "<<endl;
    p2.display();
    cout<<"   "<<endl;
    cout<<p1.evaluate(2)<<endl;
    cout<<"   "<<endl;
    cout<<p2.evaluate(2)<<endl;
    cout<<"   "<<endl;

    info_Polynomial p3 = sum(p1,p2);
    p3.display();

    return 0;
}