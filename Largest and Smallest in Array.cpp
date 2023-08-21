//Find largest and smallest in an array
#include<iostream>
using namespace std;
int main() {
	int max, min, n;
	cout<<"This program finds the largest and smallest in an array."<<endl<<endl;
	cout<<"Enter the elements in array= ";
	cin>>n;
	
	//declare array
	int a[n];
	
	//Taking input and at the same time checking for max and min
	for(int i=0;i<n;i++) {
		cout<<endl<<"Enter the element number "<<(i+1)<<"= ";
		cin>>a[i];
		
		//initializing the value of max and min from the first element
		if(i==0) {
			min=a[i];
			max=a[i];
		} else {
			
			//checking and changing max value
			if(a[i]>max) {
				max=a[i];
			}
			
			//checking and changing min value 
			if(a[i]<min) {
				min=a[i];
			}
		}
		
	}
	cout<<endl<<endl<<"Largest element in the array= "<<max<<endl;
	cout<<"Smallest element in the array= "<<min;
	return 0;
}
