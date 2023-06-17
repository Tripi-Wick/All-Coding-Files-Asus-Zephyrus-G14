#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;

	int *z;
	
	z = new int[x]{};
	
	// This creates ambiguity dont do it.
	// cout<<"Input"<<endl;
	// for(int i=1; i<x; i++){
	// 	cin>>z[i];
	// }
	// cout<<"Output"<<endl;
	// for(int i=1; i<=x; i++){
	// 	cout<<z[i]<<endl;
	// }
	cout<<"Input"<<endl;
	for(int i=1; i<x; i++){
		cin>>z[i-1];
	}
	cout<<"Output"<<endl;
	for(int i=1; i<=x; i++){
		cout<<z[i-1]<<endl;
	}

	return 0;
}