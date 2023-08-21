//Pass by reference

#include<iostream>

using namespace std;

void increment(int &c) {
	cout<<endl<<endl;
	cout<<"Now you are in increment function and the fuction defination is as increment (int &c)"<<endl;
	cout<<"This means that c points to the value at a without creating any extra memory"<<endl;
	cout<<"Now lets increment c by c++"<<endl;
	c++;
	cout<<"Value of c in increment function is: "<<c;
	cout<<"Here we can not access a as created outside a hence will print the value of a inside main"<<endl;
}

int main() {
	
	int a;
	cout<<"Variable a is created of type integer"<<endl;
	
	cout<<"Enter the value of a: ";
	cin>>a;
	
	int &b=a;
	cout<<endl<<"&b=a this means a reference b is created which points to the value at a"<<endl;
	cout<<endl<<"This means that b is another name for a and what ever changes you make to b will be reflected in a also as b points to value at a"<<endl;
	cout<<endl<<"However the interesting fact over here is that there is no extra memory allocation over here which is done while creating another variable. hence saving space"<<endl;
	
	increment (a);
	cout<<endl<<endl<<"A function increment is created and passed value a: increment (a)"<<endl;
	
	cout<<endl<<endl<<"Now we areout side of increment function"<<endl;
	cout<<"The value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
	cout<<"There is increment in value of b and a both as b is also pointing to the value at a"<<endl;
	
	return 0;
}
