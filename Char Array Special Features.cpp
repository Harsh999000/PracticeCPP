//Char array special feature

#include<iostream>

using namespace std;

int main () {
	int i[3] = {1,2,3};
	char c[3] = {'a','b','c'};
	cout<<"i[3] = i[3] = {1,2,3}"<<endl<<endl;
	cout<<"c[3] = {'a','b','c'}"<<endl<<endl;
	cout<<"i[0]= "<<i[0]<<endl<<endl;
	cout<<"Address i[0]= "<<i<<endl<<endl;
	cout<<"whole char array= "<<c<<endl<<endl;
	
	cout<<"Whenever a char array is created the c++ compiler puts a null character at the end of its and when you output it outputs every character unitil it finds null."<<endl<<endl;
	cout<<"If in between of an array you put a null and then some char later on sand use normal cout<<c, thwn it will stop printing after the null char even when there are char later on in array"<<endl<<endl;
	
	cout<<"The char array can also take input in one go. If the array length is already defined  and you enter more need not worry the compiler automatically extends the size. Try entering:"<<endl;
	cin>>c;
	cout<<"char array= "<<c<<endl;

	
	/*
Whenever a char array is created the c++ compiler puts a null character at the end of its and when you output it outputs every character unitil it finds null.
If in between of an array you put a null and then some char later on sand use normal cout<<c, thwn it will stop printing after the null char even when there are char later on in array
The char array can also take input in one go. If the array length is already defined  and you enter more need not worry the compiler automatically extends the size.
*/
	return 0;
}


