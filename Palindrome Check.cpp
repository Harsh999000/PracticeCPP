// Palindrome number check
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cout<<"Enter the number you want to check for plaindrome= ";
	cin>>s;
	int l = s.length();
	char c[l];
	strcpy(c, s.c_str());
	
	for (int i=0;i<(l/2); i++) {
		if(c[i]!=c[l-i-1]) {
			cout<<endl<<"Number is not palindrome";
			exit(0);
		}
	}
	
	cout<<endl<<"Number is palindrome";
	
	return 0;
}
