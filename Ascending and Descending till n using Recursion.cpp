//Printing natural numbers till n in ascending and descending using recursion

#include<iostream>

using namespace std;

void ascending(int n) {
	
	//if to end the loop
	
	if(n==1) {
		cout<<n<<" ";
		return ;
	}
	
	ascending(n-1);
	cout<<n<<" ";
}

void descending(int n) {
	
	//if to end the loop
	
	if(n==1) {
		cout<<n;
		return ;
	}
	
	cout<<n<<" ";
	descending(n-1);
}

int main() {
	
	int n;
	cout<<"Enter the number till when you want to print asending and desending= ";
	cin>>n;
	
	cout<<endl<<endl;
	
	cout<<"Ascending: "<<endl;
	ascending(n);
	
	cout<<endl<<"Descending: "<<endl;
	descending(n);
	
	return 0;
}
