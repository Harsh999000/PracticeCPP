//Bubble sort in Array

#include<iostream>

using namespace std;

int  main() {
	int n, N, temp;
	
	cout<<"Enter the number of elements in the array= ";
	cin>>N;
	n=N;
	
	int a[N];
	cout<<"Enter the elements in array= ";
	
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	
	/*
	Mine
	for(int i=0; i<=n-1; i++) {
		
		if(a[i]>a[i+1]) {
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
		if(i==n-2) {
			
			//i=-1 as i++ as soon as loop ends so that does not escape the first element in the next loop
			i=-1;
			n=n-1;
		}
	}
	*/
	
	//Another way of bubble sort
	
	for(int j=0;j<n-1; j++) {
		for(int i=0;i<n-j-1; i++) {
			if(a[i]>a[i+1]) {
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}	
		}
	}
	
	//Bubble sort worst case time complexity n*n, best case time complexity is n and n^2 is the avearge space time complexity
	cout<<endl<<endl<<"The time complexity of bubble sort is 2^n and the space complexity of bubble sort is 1";
	cout<<endl<<"Sorted array is = ";
	
	for(int i=0; i<N; i++) {
		cout<<" "<<a[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
