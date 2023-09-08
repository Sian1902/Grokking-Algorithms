#pragma once
#include<vector>
#include<iostream>
using namespace std;
template<class t>
void selectionSort(t arr[], int size) {
	int minIndex;
	for (int i = 0; i < size; i++) {
		//the function supposes that the current element is the smallest
		minIndex = i;
		//then all the following elements are checked to see if really the current element is smaller than all the following
		for (int j = i + 1; j < size;j++) {
			//if a smaller element is found it's position is recorded 
			//the index will keep updating till it reach the smallest element that is still not sorted
			if (arr[j] < arr[i]) {
				minIndex = j;
			}
		}
		//if the minIndex is changed this means that we found a smaller element so we swap 
		if (minIndex != i) {
			swap(arr[i], arr[minIndex]);
		}
	}
}
/*
* example of how the algorithm will work 
* let's say this is our array {3, 4, 5, 2, 1,6}
* after the first loop it will be like that {1,4,5,2,3,6}
* second loop {1,2,5,4,3,6}
* third loop {1,2,3,4,5,6}
* now that the array is sorted no change will happen in the following loops 
*/ 
// helper function for quick sort
template<class t>
int partition(std::vector<t>& arr, int low, int high) {
	int pivot = arr[high];  // Choose the rightmost element as pivot
	int i = low - 1;        // Index of smaller element

	for (int j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			std::swap(arr[i], arr[j]);  // Swap elements at i and j
		}
	}

	std::swap(arr[i + 1], arr[high]);  // Swap pivot with element at (i + 1)
	return i + 1;  // Return the position of pivot after partition
}

// Function to perform Quick Sort
template<class t>
void quickSort(std::vector<t>& arr, int low, int high) {
	if (low < high) {
		int pivotPos = partition(arr, low, high);  // Partition the array

		// Recursively sort the sub-arrays
		quickSort(arr, low, pivotPos - 1);  // Sort elements before pivot
		quickSort(arr, pivotPos + 1, high);  // Sort elements after pivot
	}
}
