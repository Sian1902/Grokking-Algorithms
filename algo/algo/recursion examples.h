#pragma once
//simple examples for recursion
#include<iostream>
using namespace std;
void recursiveCountdown(int n) {
	if (n == 0) {
		return;  //base case	
	}
	cout << n << endl;
	recursiveCountdown(n - 1); //recursive case

}
long long factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return n * factorial(n - 1);
}
//calculates power of a number
float pow(int  number, int power) {
	if (power == 0) {
		return 1;
	}
	else if (power == 1) {
		return number;
	}
	if (power > 0) {
		power--;
		return number * pow(number, power);
	}
	else if (power < 0) {
		return 1 / pow(number, abs(power));
	}
}
// return the nth fibonacci number
int fibonacci(int n)
{
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}