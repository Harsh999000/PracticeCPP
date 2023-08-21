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
	
	cout<<endl<<"Now normally everything in the stack gets deleted after the program is over but this is not the case with heap and we will have to explicitely delete it using keyword 'delete'"<<endl;
	delete [] arr2;
	
	return 0;
}
