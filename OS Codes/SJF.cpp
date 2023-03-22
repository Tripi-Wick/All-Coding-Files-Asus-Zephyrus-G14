#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int A[100][4];
	int i, j, n, index, temp, total = 0;
	float avg_wt, avg_tat;

	cout<<"Enter number of process: ";
	cin>>n;
	cout<<"Enter Burst Time: \n";
    
	// User Input Burst Time and allotting Process Id.
	for (i = 0; i < n; i++) {
		cout<<"P"<<i+1<<" : ";
		cin>>A[i][1];
		A[i][0] = i + 1;
	}
	
	// Sorting process according to their Burst Time.
	for (i = 0; i < n; i++) {
		index = i;
		for (j = i + 1; j < n; j++)
			if (A[j][1] < A[index][1])
				index = j;
		temp = A[i][1];
		A[i][1] = A[index][1];
		A[index][1] = temp;

		temp = A[i][0];
		A[i][0] = A[index][0];
		A[index][0] = temp;
	}

	