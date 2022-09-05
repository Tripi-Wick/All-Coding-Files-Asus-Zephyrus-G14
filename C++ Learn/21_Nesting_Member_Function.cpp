#include <iostream>
using namespace std;

class Binary{
    private:
        string num;
        void complement(void);
    public:
        void read(void);
        void binary_check(void);
        void show(void);
};

void Binary :: read(void){
    cout<<"Enter your binary number: ";
    cin>>num;
}

void Binary :: binary_check(void){
    complement();
    for(int i = 0; i!=num.length(); i++){
        if(num[i]=='1' || num[i]=='0'){}
        else{
            cout<<"Entered number is not a binary number"<<endl;
            exit(0);
        }
    }
}

void Binary :: complement(void){
    for(int i = 0; i!=num.length(); i++){
        if(num[i]=='1'){
            num[i]='0';
        }
        else{
           num[i]='1';
        }
    }
}

void Binary :: show(void){
    cout<<num;
}

int main()
{
    Binary number;
    number.read();
    number.binary_check();
    // number.complement();
    number.show();

    
    return 0;
}