//Nth Fibonacci Number
#include<iostream>
using namespace std;
int main() {
	int n, f=0, a=0, b=1;
	// f initialised to 0 as 0th febonacci number should give zero
	cout<<"Enter the nth Fibonacci number you want to see= ";
	cin>>n;
	for(int i=1; i<n; i++) {
		f=a+b;
		a=b;
		b=f;
	}
	
	if(n==1) {
		// 1st fabonacci number manually gave as 1
		cout<<endl<<"The 1st fibonacci number is= "<<b;
	} else if(n==2) {
		cout<<endl<<"The 2nd fibonacci number is= "<<f;
	} else if(n==3) {
		cout<<endl<<"The 3rd fibonacci number is= "<<f;
	} else {
		cout<<endl<<"The "<<n<<"th fibonacci number is= "<<f;
	}
	
	return 0;
}
