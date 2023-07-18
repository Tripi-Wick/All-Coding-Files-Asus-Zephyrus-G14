#include <iostream>
using namespace std;

int main()
{
	int* arr = new int[3]{};
	int i= 0;
	while(i<3){
		arr[i]=-1;
		i++;
	}
	for(int i=0; i<3; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}