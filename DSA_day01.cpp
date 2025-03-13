///Arrays


/*
#include<iostream>
using namespace std;

int main() {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	
	

	arr[2] = 32;
	
	arr[5] = 0;
	
	
	cout << "\nAfter deletion and insertion: ";
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}*/










//Sorting and Searching algorithms
//a) bubble sort

#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}


int main () {
	int arr[] = {6, 3, 9, 2, 92};
	int n = 5; 
	
	
	BubbleSort(arr, n);
	
	cout << "Sorted array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}
