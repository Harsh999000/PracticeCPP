//Print power of a number

#include<iostream>

using namespace std;

unsigned long long int power(int pow, int num) {
	
	if(pow == 0 || pow == 1) {
		return num;
	}
	
	return (num * power( pow-1, num));
	
}

int main() {
	
	int pow,num;
	
	cout<<"Enter the number= ";
	cin>>num;
	
	cout<<endl<<"Enter the power= ";
	cin>>pow;
	
	cout<<endl<<power(pow, num);
	
	return 0;
}
