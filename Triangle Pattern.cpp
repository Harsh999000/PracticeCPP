/* Triangle pattern

Print the below pattern('-' is space)
----*----
---***---
--*****--
-*******-
*********


*/

#include<iostream>
using namespace std;
int main() {
	int number_of_lines,total_number_of_spaces,spaces_in_lines,stars;
	cout<<"This program prints the triangle pattern"<<endl<<endl;
	cout<<"Enter the number of lines in pattern= ";
	cin>>number_of_lines;
	total_number_of_spaces = (2*number_of_lines)-1;
	cout<<endl<<endl;
	for(int i=1; i<=number_of_lines; i++) {
		//number of stars in a line
		stars = (2*i) - 1;
		//number of spaces
		spaces_in_lines = (total_number_of_spaces-stars)/2;
				
		for(int j=1; j<=total_number_of_spaces; j++) {
			// printing spaces in both if statements rest are stars
			if(j<=spaces_in_lines) {
				cout<<" ";
			} else if (j>total_number_of_spaces-spaces_in_lines) {
				cout<<" ";
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
