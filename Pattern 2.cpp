/*

Print the below Pattern('*' is space)

***1
**23
*456
78910

*/

#include<iostream>
using namespace std;
int main() {
	
	int n,i=1,j=1,count=1;
	
	cout<<"Enter the number of lines:";
	cin>>n;
	
	while(i<=n) {
		
		while(j<=n) {
			
			if(j<=n-i) {
				cout<<" ";
			} else {
				cout<<count;
				count++;
			}
			
			j++;
		}
		
		cout<<endl;
		
		j=1;
		
		i++;
	}
	
	return 0;
	
}
