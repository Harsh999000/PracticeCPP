/* Pattern 1

Print the below Pattern('*' is space)

****1
***12
**123
*1234
12345

*/

#include<iostream>
using namespace std;
int main() {
	
	int n,i=1,j=1,k=1;
	
	cout<<"Enter the number of lines: ";
	cin>>n;
	
	while(i<=n) {
		
		while(j<=n-i) {
			cout<<" ";
			j++;
		}
		
		//j becomes equal to n to break the loop so decrement 1 from j
		j=j-1;
		
		while(k<=n-j) {
			cout<<k;
			k++;
		}
		
		cout<<endl;
		j=k=1;
		i++;
	}
	
	return 0;
	
}
