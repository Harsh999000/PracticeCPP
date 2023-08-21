//This program reverse an array
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"This program reverse an array"<<endl<<endl;
	cout<<"Enter the number of elements in the array= ";
	cin>>n;
	cout<<endl;
	int a[n];
	for(int i=0;i<n;i++) {
		cout<<"Enter the element number "<<(i+1)<<" =";
		// with this logic you can directly store the array in reverse order and you just have to print the array
		cin>>a[n-i-1];
		cout<<endl;
	}
	
	cout<<endl<<"The reverse array is:"<<endl<<endl;
	for(int i=0;i<n;i++) {
		cout<<"Element number "<<(i+1)<<" ="<<a[i]<<endl;
	}
	return 0;
}
