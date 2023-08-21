// Reverse the String
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string a;
	cout<<"Enter the string you want to reverse= ";
	cin>>a;
	int l = a.length();
	
	/*
	 Some compliers will show a warning that need a 
	 contant value in of 'l' in c[l]. That happens because 
	 the code is not complied, once the program is compiled
	 the warning will not come. Else you canm also use const
	 in front of 'int l' to prhandingly declare it constant 
	*/
	char c[l],temp;
	
	//copy string to char array
	strcpy(c,a.c_str());
	
	// reversing
	for(int i=0; i<(l/2); i++) {
		temp = c[i];
		c[i] = c[l-i-1];
		c[l-i-1] = temp;
	}
	
	//printing reverse string
	cout<<endl<<"The reverse of the string is= ";
	for(int i=0; i<l; i++) {
		cout<<c[i];
	}
	return 0;
}
