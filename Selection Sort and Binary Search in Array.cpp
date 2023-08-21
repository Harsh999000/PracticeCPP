// Selection Sort and Binary Search of Array

// binary search here designed for unique array

#include<iostream>

using namespace std;

int main() {
	int n, temp, min, max, i;
	cout << "Enter the number of elements in array= ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}

	//Selection sort
	for (i = 0;i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	// The worst best and average time complexity of selsctio sort is same and is n^2
	cout << endl << "Time complexcity of selection sort is n^2 and space complexcity is 1" << endl;
	cout << "Sorted array using selection sort= ";
	for (i = 0; i < n;i++) {
		cout << " " << a[i] << " ";
	}
	cout << endl;

	cout << endl << endl << "Enter the element you want to find in the array= ";
	cin >> temp;

	//Binary Search
	cout << endl;
	/*
	i=(n-1)/2;
	min=0;
	max=n-1;

	while(min!=max) {
		if(temp==a[i]) {
			cout<<"The nunber is at index no. "<<i+1<<" staring from 1"<<endl;
			exit(0);
		} else if (temp<a[i]) {
			max=(min+max)/2;
		} else {
			min=(min+max)/2;
		}
		i=(min+max)/2;
	}

	// to check if the last element matches or not i.e when min=max
	if(temp==a[min]) {
		cout<<"The nunber is at index no. "<<min+1<<" staring from 1"<<endl;
	} else {
		cout<<"Number not found in the array"<<endl;
	}
	*/


	///*
	//Binary search better
	min = 0;
	max = n - 1;
	while (min <= max) {
		int mid = (min + max) / 2;
		if (a[mid] == temp) {
			cout << "The number is at index no. " << mid + 1 << " staring from 1" << endl;
			exit(0);
		}
		else if (a[i] < temp) {
			min = mid + 1;
		}
		else {
			max = mid - 1;
		}
	}

	cout << "The number not found in the array" << endl;
	//*/
	return 0;
}
