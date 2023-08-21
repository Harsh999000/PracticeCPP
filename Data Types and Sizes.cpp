#include<iostream>
using namespace std;

int main() {
	int i;
	float f;
	double d;
	char c;
	bool b;
	
	cout<<"Size of the data types differ from compiler to compiler."<<endl<<endl<<endl<<"The below are the size as per Dev C++:"<<endl;
	
	//Below are the Primivite Data Types
	
	cout<<"Size of integer= "<< sizeof(int)<<endl;
	
	cout<<"Size of float= "<< sizeof(float)<<endl;
	
	cout<<"Size of double= "<< sizeof(double)<<endl;
	
	cout<<"Size of char= "<< sizeof(char)<<endl;
	
	cout<<"Size of boolean= "<< sizeof(bool)<<endl;
	
	cout<<"Size of void= "<< sizeof(void)<<endl;
	
	cout<<"Size of wide character= "<< sizeof(wchar_t)<<endl;
	
	//Below are the Primitive Data Types with the use of modifiers
	
	cout<<endl<<endl<<"The below are the data modifiers:"<<endl<<"1. Signed"<<endl<<"2. Unsigned"<<endl<<"3. Long"<<endl<<"4. Short"<<endl<<endl<<endl;
	
	cout<<"Size of short integer= "<<sizeof(short int)<<endl;
	
	cout<<"Size of long integer= "<<sizeof(long int)<<endl;
	
	cout<<"Size of long long integer= "<<sizeof(long long int)<<endl;
	
	cout<<"Size of unsigned integer= "<<sizeof(unsigned int)<<endl;
	
	cout<<"Size of signed integer= "<<sizeof(signed int)<<endl;
	
	cout<<"Size of unsigned short integer= "<<sizeof(unsigned short int)<<endl;
	
	cout<<"Size of signed short integer= "<<sizeof(signed short int)<<endl;
	
	cout<<"Size of unsigned long integer= "<<sizeof(unsigned long int)<<endl;
	
	cout<<"Size of signed long integer= "<<sizeof(signed long int)<<endl;
	
	cout<<"Size of unsigned long long integer= "<<sizeof(unsigned long long int)<<endl;
	
	cout<<"Size of signed long long integer= "<<sizeof(signed long long int)<<endl;
	
	cout<<"Size of unsigned char= "<<sizeof(unsigned char)<<endl;
	
	cout<<"Size of signed char= "<<sizeof(signed char)<<endl;
	
	
	//Below are the range of different Data Types
	
	cout<<endl<<endl<<"The below are the range of the different data types:"<<endl;
	
	cout<<"Range of integer= "<<INT_MIN<<" to "<<INT_MAX<<endl;
	
	cout<<"Range of short integer= "<<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
	
	cout<<"Range of long integer= "<<LONG_MIN<<" to "<<LONG_MAX<<endl;
	
	cout<<"Range of long long integer= "<<LLONG_MIN<<" to "<<LLONG_MAX<<endl;
	
	cout<<"Range of unsigned integer= 0 to "<<UINT_MAX<<endl;
	
	cout<<"Range of signed integer= "<<INT_MIN<<" to "<<INT_MAX<<endl; //Same as the integer range
	
	cout<<"Range of unsigned short integer= 0 to "<<USHRT_MAX<<endl;
	
	cout<<"Range of signed short integer= "<<SHRT_MIN<<" to "<<SHRT_MAX<<endl; // Same as the short integer range
	
	cout<<"Range of unsigned long integer= 0 to "<<ULONG_MAX<<endl;
	
	cout<<"Range of signed long integer= "<<LONG_MIN<<" to "<<LONG_MAX<<endl; // Same as long integer
	
	cout<<"Range of unsigned long long integer= 0 to "<<ULLONG_MAX<<endl;
	
	cout<<"Range of signed long long integer= "<<LLONG_MIN<<" to "<<LLONG_MAX<<endl; //Same as long long integer
	
	cout<<"Range of character= "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
	
	cout<<"Range of signed character= "<<SCHAR_MIN<<" to "<<SCHAR_MAX<<endl;
	
	cout<<"Range of unsigned character= 0 to "<<UCHAR_MAX<<endl;
	
	cout<<"Range of wide character= 1 wide character"<<endl;
	
	return 0;
}
