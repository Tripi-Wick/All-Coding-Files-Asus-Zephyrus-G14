#include <iostream>
#include <math.h>
using namespace std;

class point{
    private:
        int x,y,z;
    public:
        point(int,int,int);
        friend float distance(point,point);
        void display(){
            cout<<x<<y<<z;
        } 
};

point :: point(int a, int b, int c){
    x=a;
    y=b;
    z=c;
}
float distance(point p1, point p2){
    float res = pow((((p2.x-p1.x)*(p2.x-p1.x)) + ((p2.y-p1.y)*(p2.y-p1.y)) + ((p2.z-p1.z)*(p2.z-p1.z))),0.5);
    return res;
}

int main()
{
    int a,b,c;
    float res;

    cout<<"Enter 'x', 'y' & 'z' coordinates of first point: ";
    cin>>a>>b>>c;
    point p1 = point(a,b,c);

    cout<<"Enter 'x', 'y' & 'z' coordinates of second point: ";
    cin>>a>>b>>c;
    point p2 = point(a,b,c);

    res=distance(p1,p2);

    cout<<"The distance between two point is: "<<res;
    
    return 0;
}