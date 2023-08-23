// 2 dimensional array using dynamic memory allocation

#include<iostream>

using namespace std;

int main() {
	
	int row, column;
	
	cout<<"We are here trying to understand the concept of 2-D Array using dynamic memroy allocation. Now we do not directly have a concept of 2-D Arry in Dynamic memory allocation"<<endl;
	cout<<"However we can use the combination of 1-D Array to get the same result. To do so we will create one array with the number of rows and then we will assign them address of different 1-D Array"<<endl;
	cout<<"In this way to access lets say A[n][m] cell we will go to nth element of first array. Now this will have an address to a 2nd 1-D Array where we will access mth element."<<endl;
	cout<<"Since we do not have directly a concept of 2-D Array we will not be able to declare a array like *p = new int [n][m]"<<endl;
	cout<<"We will be creating one 1-D Array wich will store an address and since the first variable in itself is an address to this 1-D Array we will declare it as below:"<<endl;
	cout<<"int **p = new int*[n]."<<endl<<"The two pointer as first to declare which p is storing is an address which gives us *p and the what '*p' is strong is also an address hence **p"<<endl;
	cout<<"Also, new int*[n] as we are declaring an array of address data type"<<endl;
	cout<<"Now we will go ahead an create n number of array with m elements as below:"<<endl;
	cout<<"p[i] = new int[m]"<<endl<<"Here 'i' will chnage from 0 to n-1 as array starts from 0. Also, we will not use int *p[i] and delcare data type, as it was already specified in in **p that it will store an address"<<endl;
	cout<<"So we will decalare the things as mentioned above. And take in the inputs for 2-D Array and will print the same"<<endl;
	
	cout<<"Enter the number of rows = ";
	cin>> row;
	cout<<endl<<"Enter the number of columns = ";
	cin>> column;
	cout<<endl;
	
	int **p = new int*[row];
	
	for (int i=0; i<row; i++) {
		p[i] =  new int[column];
	}
	
	for (int i=0; i<row; i++) {
		for (int j=0; j<column; j++) {
			//if we want to fasten up the process of data input we can put space and give the whole row in one go. I we do that it will take the input but will execute the cout after taking the input for 1st row
			cout<<"Enter the value for "<<i<<" row and "<<j<<" column";
			cin>> p[i][j];
		}
	}
	
	for (int i=0; i<row; i++) {
		for (int j=0; j<column; j++) {
			cout<<p[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	return 0;
	
}