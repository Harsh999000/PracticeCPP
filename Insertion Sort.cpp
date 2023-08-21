//Insertion Sort in Array

# include<iostream>

using namespace std;

int main () {
	int n, N,temp;
	
	cout<<"Enter the number of elements in array= ";
	cin>>n;
	N=n;
	int a[n];
	
	cout<<"Enter the array="<<endl;
	
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	
	
	/*
	//Mine
	
	for(int i=0;i<n-1;i++) {
		for(int j=i+1; j>=0; j--) {
			if(a[j-1]>=a[j]) {
				temp = a[j-1];
				a[j-1] = a[j];
				a[j] = temp;				
			} else {
				break;
			}
		}
	}
	
	*/
	
	//Another way
	
	for(int i=1;i<n;i++) {
		int temp = a[i];
		int j;
		for(j=i-1; j>=0;j--) {
			if(a[j]>temp) {
				a[j+1] = a[j];
			} else {
				break;
			}
		}
		a[j+1] = temp;
	}
	
	
	cout<<endl<<"Sorted Array is= "<<endl;
	
	for(int i=0;i<n;i++) {
		cout<<" "<<a[i]<<" ";
	}
	
	return 0;
}
