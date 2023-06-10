 #include <iostream>
 using namespace std;

int power(int m, int n){
    static int res = 1;
    if(n>0){
        res = res*m;
        power(m,n-1);
    }
    else return res;
}
 
int main()
{
    int m,n;
    cout<<"Enter the base and power : ";
    cin>>m>>n;
    cout<<"Ans = "<<power(m,n);
    return 0;
}


//  More More Better Approach :
/*
int power(int n,int m){
   return (power(m,n-1)*m);
}
*/


// Time COmplexity = O(n^2)     