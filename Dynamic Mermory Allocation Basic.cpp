//Dynamic Mermory Allocation Basic

#include<iostream>

using namespace std;

int main() {
	
	cout<<"The memory allocation which is done during compile times is stored in stack and is called static memory allocation."<<endl<<endl;
	cout<<"The memory allocated during run time is called dynamiv memory allocation and is stored in heap."<<endl<<endl;
	cout<<"Now stack is much smaller than heap. So, in cases where we want to reduce the memory allocation for program we can use heap memory"<<endl<<endl;
	cout<<"This also helps in saving memory. As if we create a array in stack we will have a fixed size if we donot use that space it will be watsed."<<endl<<endl;
	cout<<"If you use heap memory we can add and delete memory allocation as per our requirment."<<endl<<endl;
	cout<<"We can use 'new' to create a memory allocation in heap for int and we can use a pointer to access the value at that address location."<<endl<<endl;
	cout<<"So the syntax would be int '*p = new int'"<<endl;
	cout<<endl<<"We are creating two array to show the difference in memory allocation"<<endl<<endl;
	int n;
	cout<<"Enter the number of elements in array= ";
	cin>> n;
	
	cout<<endl<<"Now we will create two array one normal and the other one in heap by the index 'int *a = new int[n]'"<<endl<<endl;
	int arr1[n];
	int *arr2 = new int[n];
	//under normal array creation we need to give the size of the n first but this is not the case with dynamic memory allocation we can also declare the array before we take n and eveything would work fine
	cout<<"The size of normal array= "<<sizeof(arr1)<<endl;
	cout<<"The size of the pointer used to access the array created in heap= "<<sizeof(arr2)<<endl;
	cout<<"The size of normal array is more as every value is an integer in that array which is of 4 bits so it end up occupying the size of the  array * 4"<<endl<<endl;
	
	cout<<"Please note that we can access the elements of  the arry in heap exactly like normal array. Like arr2[n] to access nth element on the aaray. Enter the elements of the array:"<<endl;
	
	
	
	for(int i=0;i<n;i++) {
		cout<<"Enter the value of arr["<<i<<"] = ";
		cin>>arr2[i];
	}
	
	for(int i=0;i<n;i++) {
		cout<<"Value of arr["<<i<<"] = ";
		cout<<arr2[i]<<endl;
	}
	
	cout<<"Also, the name of the array stores the location of the first element in the array and the '*array_name' gives first elemnt of the array. Below is the shown example:"<<endl''
	cout<<"valueof arr2 = "<<arr2<<endl;
	cout<<"Value at *arr2 = "<<*arr2<<endl;
	
	
	cout<<endl<<endl<<"Now normally everything in the stack gets deleted after the program is over but this is not the case with heap and we will have to explicitely delete it using keyword 'delete'"<<endl;
	delete [] arr2;
	
	
	cout<<endl<<"We can not directly declare a variable such as int a = new int, as 'new int' is stored outside of program and must be accessed using the address."<<endl;
	cout<<"Hence we must declare *p to store the heap memory as heap memory can not be assigned to a variable directly and must be accessed using a pointer."<<endl;
	cout<<endl<<"Creating * p to store the address of heap memory."<<endl;
	cout<<"Also, we can not use &p directly as '&' is used to make a reference to the address. And &p will say address of p which is not initialised."<<endl;
	cout<<"The way to store the address is to create *p which make p store the address. the '*' specifies that an address is stored in variable p"<<endl;
	cout<<"So the value of p is an address and *p will take the value save at the address p"<<endl;
	cout<<"We can use &p to check the adress of p, as now it has been initialised which will store the value as an address"<<endl<<"The below is the example"<<endl;
	cout<<"Created *p and gave the address of a in p by p=&a"<<endl;
	cout<<"Please also note that we can not access the heap variable just like normal variable as in the case of aary we need to use * to get the value of the variable"<<endl;
	
	int *p = new int;
	
	cout<<"Enter the value of *p = ";
	cin>>*p;
	
	cout<<"value of p = "<<p<<endl;
	cout<<"Value of &p = "<<&p<<endl;
	cout<<"Value of *p ="<<*p<<endl;
	cout<<"Size of p = "<<sizeof(p)<<endl;
	cout<<"Size of *p = "<<sizeof(*p)<<endl;
	cout<<"Size of &p = "<<sizeof(&p)<<endl;
	
	cout<<"To make sure the heap memory is deleted after the closure of program deleting the a by delete p"<<endl;
	cout<<"delete *p will give an error as we are trying to delete the value. However we just want to delete the meory allocated"<<endl;
	delete p;
	
	cout<<"An important point to be noted is that pounter is stored in stack that is basically the program memory"<<endl;
	cout<<"And the size of the address is stored in 8 bits and hence the size of the array declared using heap is always 8 irrespective of the size of arrary."<<endl;
	cout<<"This is because we are using only one address to access the array"<<endl;
	cout<<"When said that the heap will use less memeory is for the cause where the variable size or the array size will exceed the size of an address."<<endl;
	cout<<"In the case where we used heap to store variable of lesser size than address is a wastage of memory."<<endl;
	cout<<" This you can see from the size of *p which is an address and which is same as the value of &p"<<endl;
	cout<<"So *p means p is a variable which will store address. Since address is of 8 bits, the size of p is 8 bits."<<endl;
	cout<<"And when referring to &p the is the address of p hence this is also of 8 bits."<<endl<<endl;
	cout<<"Hence the use of heap memory is more useful to save space when delaing with arrary or data types with data size greater than 8 bits"<<endl;
	
	return 0;
}