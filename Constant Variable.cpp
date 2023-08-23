// Constant Variable

#include<iostream>

using namespace std;

int main() {
	cout<<"If we want that the value for a variable should not change even by mistake during the entire program cycle, we can use 'const' keyword. If we by mistake change it we will get an error"<<endl;
	cout<<"This can be done as below syntax:"<<endl<<"Data_Type const Variable_Name = Variable_Value;"<<endl;
	int  a;
	cout <<"We have created a constant variable 'a'. And the value must be assigned at the time of declaration of variable. I have Assigned 0."<<endl;
	//a++;
	cout<<"I have commented the a++ in code as I was getting an error"<<endl;
	cout<<"The error was:"<<endl<<"[Error] ambiguous overload for 'operator>>' (operand types are 'std::istream {aka std::basic_istream<char>}' and 'const int')"<<endl;
	
}