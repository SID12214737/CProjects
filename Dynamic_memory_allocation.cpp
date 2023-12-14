#include <iostream>
using namespace std;

int main() {
	int capacity{ 5 };

	int* numbers = new int[capacity];
	int entry{};

	while (true) {
		cout << "Number: ";
		cin >> numbers[entry];
		if (cin.fail()) break;
		entry++;
		if (entry == capacity) {
			capacity *= 2;
			int* temp = new int[capacity];
			for (int i{}; i < entry;i++)
				temp[i] = numbers[i];
			
			delete[] numbers;
			numbers = temp;
		}
	}

	for (int i{}; i < entry;i++) {
		cout << numbers[i] << endl;
	}

	delete[] numbers;

	return 0;
}
