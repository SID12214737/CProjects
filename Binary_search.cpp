// Binanry search
#include <iostream>
using namespace std;

// Binanry search function takes 3 inputs:
//  list to search in, target to look for,
// length of the array or highest bound,
// and lower bound that is by default 0.
// This function returns the index of the target in the list, 
// or -1 if target is not found.
int biSearch(int arr[], int tar, int high, int low=0) {
	if (high >= low) {
		// calculate midle index
		int mid = low + (high - low) / 2;
		// compare middle with target
		if (arr[mid] == tar)
			return tar;
		// if middle is greater than target
		// change the higher boud with the middle - 1
		if (arr[mid] > tar)
			return biSearch(arr, tar, low, mid-1);
		// Otherwise...
		// (if middle is smaller than target)
		// change the lower boud with the middle + 1
		return biSearch(arr, tar, mid + 1, high);
	}
	return -1;
}

int main() {
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	short tar = 5;
	int len = size(list);
	
	int result = biSearch(list, tar, len);
	
	if (result == -1)
		cout << "Target not found";
	else
		cout << "Target found at index " << result;
	return 0;
}
