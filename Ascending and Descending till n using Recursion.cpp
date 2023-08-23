//Printing natural numbers till n in ascending and descending using recursion

#include<iostream>

using namespace std;

void ascending(int n) {
	
	//if to end the loop
	
	if(n==1) {
		cout<<n<<" ";
		return ;
	}
	
	ascending(n-1); //calls function for smaller value to be printed first
	cout<<n<<" "; //  Prints bigger value after smaller value printed br calling fuction above
}

void descending(int n) {
	
	//if to end the loop
	
	if(n==1) {
		cout<<n;
		return ;
	}
	
	cout<<n<<" "; // prints bigger first
	descending(n-1); //  calls function from smaller value to be printed next
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