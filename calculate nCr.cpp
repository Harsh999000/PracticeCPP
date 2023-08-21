//calculate nCr
#include<iostream>
using namespace std;

unsigned long long int fact(int n) {
	unsigned long long int fact=1;
	for(int i=1;i<=n;i++) {
		fact = fact*i;
	}
	return fact;
}

int main() {
	
	int n,r;
	unsigned long long int c;
	
	cout<<"This program calculates the value of nCr"<<endl<<endl;
	cout<<"Enter the value of n= ";
	cin>>n;
	cout<<endl<<"Enter the value of r= ";
	cin>>r;
	c=fact(n)/(fact(r)*fact(n-r));
	cout<<endl<<"The value of "<<n<<"C"<<r<<" is= "<<c;
	
	return 0;
}
