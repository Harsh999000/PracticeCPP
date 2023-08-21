//find the prime number from the list of numbers
#include<iostream>
using namespace std;

bool is_Prime(int n) {
	
	if(n==1 || n==2) {
		return true;
	} else {
		for (int i=2;i<n;i++) {
			if(n%i==0) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	int n;
	cout<<"This program finds the prime numbers from the list provided"<<endl<<endl;
	cout<<"Enter the number of elements in the list= ";
	cin>>n;
	int l[n];
	cout<<"Enter the numbers in the list:"<<endl;
	for (int i=0;i<n;i++) {
		cout<<" Element "<<(i+1)<<"= ";
		cin>>l[i];
		cout<<endl;
	}
	cout<<"Prime numbers from the list are= ";
	for (int i=0;i<n;i++) {
		if(is_Prime(l[i])) {
			cout<<l[i]<<" ";
		}
	}
	return 0;
}
