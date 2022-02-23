#include <stdio.h>

int main()
{
    float a,b,c;
    
    printf("Enter the marks scored in 'a' subject "); scanf("%f",&a);
    printf("Enter the marks scored in 'b' subject "); scanf("%f",&b);
    printf("Enter the marks scored in 'c' subject "); scanf("%f",&c); 

    float A = (a/100)*100 ; // }
    float B = (b/100)*100 ; // }{abc are subjects and ABC are Percentage in thesse subjects.}
    float C = (c/100)*100 ; // }

    printf("Percent marks obtained in subject 'a' is %f \n", A );
    printf("Percent marks obtained in subject 'b' is %f \n", B );
    printf("Percent marks obtained in subject 'c' is %f \n", C );

    float D = (a+b+c)/300*100 ; // }{D is overall percentage}
    
    printf("overall percentage obtained is %f \n", D );

    if(a,b,c>=33 && D>=40) {printf("Voilà, You have Cleared The Exam");}
    else {printf("Sorry, You Have Failed The Exam");} 

    return 0;
}