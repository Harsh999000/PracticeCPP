//Pointers concept
# include<iostream>

using namespace std;

int main() {
	//variable "i" is created of type integer
	int i;
	
	cout<<"Variable 'i' is created of type integer"<<endl;
	cout<<"Enter the value in a variable 'i'= ";
	//variable "i" is given a value
	cin>>i;
	cout<<endl<<"Variable 'i' has a value of= "<<i<<endl;
	
	/*
	The * operator is used for indirection.
	Indirection means the value in p is interpreted as a memory address and the value at that address is loaded.
	*/
	int *p;
	
	cout<<endl<<"The * operator is used for indirection."<<endl;
	cout<<"Indirection means the value in 'p' is interpreted as a memory address and the value at that address is loaded."<<endl;
	cout<<"'*p' is created"<<endl;
	
	
	cout<<"Storing '&i' in 'p'. Since '*p' will interpret the value in 'p' as an address hence storing address of 'i' in 'p'"<<endl;
	
	p = &i;
	/*
	since *p means the value in p will be treated as an address and *p would load the value at p which is the value of i as p stores address of i
	*/
	
	cout<<"Since '*p' means the value in 'p' will be treated as an address and '*p' would load the value at 'p' which is the value of 'i' as 'p' stores address of 'i'"<<endl;
	
	cout<<endl<<endl<<"All the values now:"<<endl;
	cout<<"Value of 'i'= "<<i<<endl;
	cout<<"Address of 'i'= '&i'= "<<&i<<endl;
	cout<<"Value in 'p' is address of 'i' which is '&i'. 'p'= "<<p<<endl;
	cout<<"'*p' is the value at address location in 'p'and is equal to 'i'. '*p'= "<<*p<<endl;
	cout<<"'&p' gives the location where the value of 'p' is stored and '&p'="<<&p<<endl;
	
	/*
	pointers behave differently with char
	
	
	
	if you create a char ch1 = 'c';
	and a pointer char *p1 = &ch1;
	*p1 will store the value at the  ch1
	p1 will store the address and if we print *p1 the it will print value at ch1 first and then keep on printing (if there is no value after it then will print garbage value) until it finds a null
	
	now char ch2[] = abc;
	This creates an array with 4 elements ch2[0]=a, ch2[1]=b, ch2[2]=c, ch2[4]='\0' which is null by default it is done when the array is created
	if you cout<<ch; it will print the whole array till it finds null so it will print abc
	char *p2 = ch2;  as ch2 stores the address of first element in the array
	p2 will store the adreess and if we print *p2 then it will print the value at ch2 and then keep on printing (if there is no value it then will print garbage value) until it finds a null 
	
	*/
	cout<<endl<<endl;
	
	char ch2 []= "abc";
	cout<<"Creating a char array ch2 and giving it a value of abc by defalut null at last"<<endl;
	
	char *p2 = ch2;
	cout<<"*p2 is created and given a value of &ch2"<<endl;
	
	cout<<"Value of p2= "<<p2<<endl;
	
	cout<<"Value of *p2= "<<*p2<<endl;
	
	cout<<"Value of &ch2= "<<&ch2<<endl;
	
	char  ch1 = 'd';
	cout<<"Creating a char variable ch1 and giving it a value of d"<<endl;
	
	char *p1 = &ch1;
	cout<<"*p1 is created and given a value of &ch1"<<endl;
	
	cout<<"Value of p1= "<<p1<<endl;
	
	cout<<"Value of *p1= "<<*p1<<endl;
	
	cout<<"Value of &ch1= "<<&ch1<<endl;
	
	/* if */
	
	char ch3[4];
	/*ch3[4] = {'a','b','c'};*/	

	cout<<"Created an char array ch2, with 4 size."<<endl<<"Now I am trying to assign the value to the variable but it won't work."<<endl;
	cout<<"Commenting this creation out since this will cause a compiler error"<<endl;
	cout<<"ch3[4]={'a,'b','c'}, this won't work because the variable ch3[4] when created, saves enough space to store 4 char, that means 5 space";
	cout<<endl<<"First four for the array units and last as null value."<<endl<<"Now once this is created the ch3[4] will store the address";
	cout<<"to the location for the start of array so that it can access next address until it finds null"<<endl;
	cout<<"This ch3[4] is not modifiable like nomrmal variable after this craetion, if you want to change the value use string copy"<<endl;
	
	char ch4[4] = "ab";
	cout<<"Now created ch4[4] and assigned the value ch4[] = 'ab' instead of using single quote use double quotes."<<endl;
	cout<<"As this causing program to break used like this."<<endl;
	cout<<ch4;
	
	return 0;
}
