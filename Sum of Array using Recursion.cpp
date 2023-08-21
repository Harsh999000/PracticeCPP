//Sum of array using recursion

#include<iostream>

using namespace std;

int sumOfArray(int arr[],int n) {
	if(n==0) {
		return arr[0];
	}
	return (arr[n]+sumOfArray(arr,n-1));
}

int main() {
	int n;
	cout<<"Enter the number of elements in array = ";
	cin>>n;
	
	int arr[n];
	
	cout<<endl<<"Enter the elements in array:"<<endl;
	for(int i=0;i<n;i++) {
		
		cout<<endl<<"Element "<<i<<": ";
		cin>>arr[i];
	}
	
	cout<<endl<<"Sum of above array= "<<sumOfArray(arr,n-1);
	
	return 0;
}

