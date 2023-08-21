#include<iostream>
using namespace std;
int main() {
	float p,r,t;
	cout<<"This is a program to calculate the simple interest"<<endl<<endl<<endl;
	cout<<"Enter the princpal amount= Rs. ";
	cin>>p;
	cout<<"Enter the rate of interest(in percentage)= ";
	cin>>r;
	cout<<"Enter the time(in years)= ";
	cin>>t;
	cout<<endl<<"Simple Interest= Rs. "<<(p*r*t)/100<<endl;
	return 0;
}
