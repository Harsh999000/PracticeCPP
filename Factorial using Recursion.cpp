//Factorial using recursion

#include<iostream>

using namespace std;

int fact(int a) {
	
	if(a==0) {
		return 1;
	}
	
	return (a*fact(a-1));
}

int main() {
	
	int a;
	
	cout<<"Enter the number= ";
	cin>>a;
	
	cout<<endl<<"The factorial of "<<a<<" = ";
	
	cout<<fact(a);
	
	return 0;
}