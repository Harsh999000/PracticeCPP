//Fibonacci Series using recursion

#include<iostream>

using namespace std;

int fib(int n) {
	//2 conditions as calling function for n-1 and n-2, so to keep a check it does not go in negative a check of n==0 and n==1 so on function call 3 it call 2 and 1 which will be delivered from below check
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