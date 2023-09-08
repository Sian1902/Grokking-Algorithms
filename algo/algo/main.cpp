#include"search.h"
#include"sort.h"


int main() {
	
	vector<int> arr = { 2,4,1,3,5 };
	quickSort(arr, 0, 4);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}