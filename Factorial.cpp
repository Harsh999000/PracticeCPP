// Factorial program
#include<iostream>
using namespace std;
int main() {
	unsigned long long int fact=1; int n;
	cout<<"Enter the number whose factorial you want to calculate: ";
	cin>>n;
	for(int i=1;i<=n;i++) {
		fact=fact*i;
	}
	cout<<endl<<"Factorial of "<<n<<" is "<<fact<<endl;
	return 0;
}
