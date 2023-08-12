#pragma once
#include<iostream>
using namespace std;

template<class t>
int binarySearch(t arr[], t element, int size)
{

	int start = 0;
	int end = size - 1;
	int midle;
	// the loop keeps searching for the element as long as the start is less that or equal the end 
	//which is the condition for breaking the loop 
	while (start <= end) {
		//calculating the middle position of the array after each operation
		midle = (start + end) / 2;
		if (arr[midle] == element) {
			return midle;
		}
		else if (arr[midle] < element) {
			start = midle + 1;
		}
		else {
			end = midle - 1;
		}
	}
	//return -1 if the element isn't found 
	return -1;
}

template<class t>
int linearSearch(t arr[], t element, int size) {
	//checking the elements of the array one by one
	for (int i = 0; i < size; i++) {
		if (element == arr[i]) {
			return i;
		}
	}
	//return -1 if the element isn't found 
	return -1;
}