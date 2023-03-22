#include <iostream>
using namespace std;

typedef struct Demonstrator_Structure{
    int length,breadth,height;
}demo;

int vol1(demo x){
    int res;
    res = x.length*x.breadth*x.height;
    return res;
}

int vol2(struct Demonstrator_Structure* x){
    int res;
    res = x->length*x->breadth*x->height;
    return res;
}

int vol3(demo& x){
    int res;
    res = x.length*x.breadth*x.height;
    return res;
}

int main()
{
    struct Demonstrator_Structure d2 = {6,5,7};

    demo d1;
    d1.length = 6;
    d1.breadth = 5;
    d1.height = 7;

    cout<<"Length of d1 = "<<d1.length<<" Breadth of d1 = "<<d1.breadth<<" Height of d1 = "<<d1.height<<endl;
    cout<<"Length of d2 = "<<d2.length<<" Breadth of d2 = "<<d2.breadth<<" Height of d2 = "<<d2.height<<endl;

    cout<<"******** Call By Value ********"<<endl;
    cout<<"Volume = "<<vol1(d1)<<endl;
    
    cout<<"******** Call By Address ********"<<endl;
    cout<<"Volume = "<<vol2(&d2)<<endl;
    
    cout<<"******** Call By Reference "<<endl;
    cout<<"Volume = "<<vol3(d1)<<endl;

    return 0;
}