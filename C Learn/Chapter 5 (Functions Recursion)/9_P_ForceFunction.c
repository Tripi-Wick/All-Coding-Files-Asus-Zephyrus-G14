#include <stdio.h>
#include <math.h>
float force(float a);

int main()
{

    float mass;
    printf("Enter the mass of body ");scanf("%f",&mass);
    printf("So the force exerted by earth on body is %f", force(mass));
    return 0;
}

float force(float a){
    float b,G,m,r;

    r=6.4*pow(10,6);
    m= 6.0*pow(10,24); 
    G =6.67*pow(0.1,11);

   b=(G*a*m)/pow(r,2);

return b;

}