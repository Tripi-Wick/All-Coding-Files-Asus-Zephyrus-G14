#include <stdio.h>
#include <math.h>

void flip(int n1, int n2);

void swap(int* ,int*);

int main()
{
	int num1,num2;
    printf("Enter a number: ");scanf("%d",&num1);
    printf("Enter the number from where you wanna flip this number: ");scanf("%d",&num2);

	flip(num1,num2);


}

void flip(int n1, int n2)
{

	int arr[n1],i=0;
	static int j=1;

	do{
		j = n1%10;
		j++;
	}while(j > 10);

	while(n1 > 10){
		arr[i]= n1 % (int)(pow(10,j));
		i++;
		j--;
	}

        
    
    for(int a= n2; n2 < i/2; n2++){
    swap(&arr[a],&arr[j]);
    j--;
    }

    for(int i=0; i<i; i++){
        printf("%d ",arr[i]);
    }
}

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}