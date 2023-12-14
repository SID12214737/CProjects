#include <iostream>
using namespace std;

// Search Function needs 3 parameters list to search in,
// size of the list, and the object(value) to search for.
int linearSearch(int list[], int size, int value) {
	// Using a for loop we iterate through the list.
	for (int i = 0; i < size; i++) {
		//check for the match and return index if found.
		if (list[i] == value)
			return i;
	}
	//return -1 if objeect is not in the list.
	return -1;
}

int main() {
	int a[] = { 2, 3, 4 };
	cout << linearSearch(a, size(a), 3);
	return 0;
}
