//Print power of a number

#include<iostream>

using namespace std;

unsigned long long int power(int pow, int num) {
	
	if(pow == 0) {
		// if the below check is not it return 1 on 0 to the power 0
		if (num = 0)  {
			return 0;
		}
		return 1;
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