#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;

	int *z;
	
	z = new int[x]{};
	
	cout<<"Input"<<endl;
	for(int i=1; i<x; i++){
		cin>>z[i];
	}
	cout<<"Output"<<endl;
	for(int i=1; i<x; i++){
		cout<<z[i]<<endl;
	}

	return 0;
}