// Selection sort

#include <iostream>
using namespace std;

int least(int arr[], int i, int n) {
	int position = i;
	int leastNum = arr[i];
	for (int j = i + 1; j < n + 1; j++) {
		if (leastNum < arr[j]) {
			leastNum = arr[j];
			position = j;
		}
	}
	return position;
}

void selSort(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		int position = least(arr, i, n);
		int temp = arr[i];
		arr[i] = arr[position];
		arr[position] = temp;
	}
}
