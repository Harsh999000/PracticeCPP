//Fibonacci Series using recursion

#include<iostream>

using namespace std;

int fib(int n) {
	
	if(n==0) {
		return 0;
	} else if (n==1) {
		return 1;
	}
	
	return (fib(n-1)+fib(n-2));
}

int main() {
	
	int n;
		
	cout<<"Enter the number till when you want to see a fibonacci series: ";
	cin>>n;
	cout<<endl<<"Fibonacci Series till "<<n<<": "<<endl;
	for(int i=0;i<n;i++) {
		cout<<fib(i)<<endl;
	}	
	cout<<endl;
	return 0;
}
