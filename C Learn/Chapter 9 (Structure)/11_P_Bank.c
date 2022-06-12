#include <stdio.h>
#include <string.h>
    typedef struct Bank
    {
        int Account_Number;
        char Account_Holder_Name[100];
        float Amount;
        float ROI;
        char Nominee[100];
    }Bank;
    
int main()
{
    Bank a1;
    a1.Account_Number=12343543;
    strcpy(a1.Account_Holder_Name,"Tripi Wick");
    a1.Amount=43543.324;
    strcpy(a1.Nominee,"Jhon Constantine");
    a1.ROI=29;

    printf("%d\n%s\n%f\n%s\n%f",a1.Account_Number,a1.Account_Holder_Name,a1.Amount,a1.Nominee,a1.ROI);
    return 0;
}