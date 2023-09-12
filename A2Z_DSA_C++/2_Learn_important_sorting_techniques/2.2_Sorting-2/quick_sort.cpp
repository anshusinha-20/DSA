#include<iostream>
using namespace std;

// Time complexity - o(nlogn), space complexity - o(1)
int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot = input[start]; // pivot initially is taken as the first element of the array
	int i = start; // i is the starting position of the array
	int j = end; // j is the ending position of the array

	while (i < j) { // loop will run until the starting position is smaller than the ending position
		while (input[i] <= pivot && i <= end) {  // finding if elements in the left of the pivot are smaller or equal to the pivot
			i += 1; // the loop will stop if an element is found to be greater than the pivot, and i will have the value of that larger element
		}
		while (input[j] > pivot && j >= start) { // finding if elements in the right of the pivot are greater than the pivot
			j -= 1; // the loop will stop if an element is found to be smaller than the pivot, and j will have the value of that smaller element
		}
		if (i < j) { // if input[i] > input[j] and i < j, swap  (i had the value of that larger element and j had the value of that smaller element)
			swap(input[i], input[j]);
		}
	}
	swap(input[start], input[j]); // j had the value of the smaller element than the pivot, so input[start] was swapped with input[j], for ex. 4(pivot, start) 3 2 1(j) 7 9 5 6 
	return j;
}

void quickSort(int input[], int start, int end) {
	if (start < end) {
		int p_index = partitionArray(input, start, end); // getting the partition index
		quickSort(input, start, p_index - 1); // sorting the left part of the pivot
		quickSort(input, p_index + 1, end); // sorting the right part of the pivot
	}
}

int main() { // Intuition - pick up a pivot and place it in its correct position in the array
	int n; // number of elements in the array
	cin >> n;

	int arr[n]; 
	for (int i = 0; i < n; i++) { // filling the array with the elements
		cin >> arr[i];
	}

	quickSort(arr, 0, n-1); // calling quickSort function to sort the array

	for (int i = 0; i < n; i++) { // printing the final array
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
