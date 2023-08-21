//Continue Statement

#include<iostream>
using namespace std;
int main() {
	
	cout<<"Continue is a loop control statement. It forces to continue to the next iteration."<<endl;
	cout<<"Also, the code in the loop after the continue is skipped and the next teration begins"<<endl;
	
	cout<<endl<<"If you use continue in a for loop the steps will be skipped after continue."<<endl;
	cout<<"However the at the next step of iteration the values will be increased."<<endl;
	cout<<"Here below is an example of continue in the for loop:(continue used at i==3)"<<endl<<endl;
	
	for(int i=0; i<5; i++) {
		cout<<"Value of i before continue: "<<i<<endl;
		if(i==3) {
			continue;
		}
		cout<<"Value of i after continue: "<<i<<endl;
	}
	
	cout<<endl<<endl;
	
	cout<<"In above case at step no 3 the value after continue is not printed as it is skipped."<<endl;
	cout<<"However, in the next iteration statement the value of the i is still incremented ";
	cout<<"as a part of the for loop"<<endl;
	cout<<"Now in case of the while loop the value is incremented in the loop. ";
	cout<<"So, if the increment part is skipped it will continue in an infinite loop. "<<endl;
	cout<<"In here I am showing while loop with continue statement. ";
	cout<<"In this I will be printing value before and after continue to see the difference. ";
	cout<<"However will break the statement later on to not form an infinite loop."<<endl;
	cout<<"Here below is an example of continue in the while loop:(continue used at i==3)"<<endl<<endl;
	
	int a=0, i=0;
	while(i<5) {
		a++;
		
		if(a>8) {
			break;
		}
		
		cout<<"Value of i before continue= "<<i<<endl;
		cout<<"Count of loop: "<<a<<endl;
		if(i==3) {
			continue;
		}
		i++;
		cout<<"Value of i after continue and increment= "<<i<<endl;
		cout<<"Value of loop: "<<a<<endl;
		
	}
	
	return 0;
}
