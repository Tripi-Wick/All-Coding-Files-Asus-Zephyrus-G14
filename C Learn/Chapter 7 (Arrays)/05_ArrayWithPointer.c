#include <stdio.h>

int main(){
   int i, marks[i];
   int *ptr;
   ptr = &marks;

   printf("Enter the number of students ");scanf("%d",&i);

   for(int a=0;a<i;a++){
       printf("Enter the number of %d student: ",a+1);
       scanf("%d",ptr);
       ptr++;
   }

   for(int a=0;a<i;a++){
       printf("The number of %d student:%d\n",a+1,marks[a]);
   }
   
   return 0;
}