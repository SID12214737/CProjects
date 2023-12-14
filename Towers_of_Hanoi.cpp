//Recursion - Calling a function inside of the function itself.

//Towers of Hanoi problem
#include <iostream>

using namespace std;

// 'n' number of plates, 
// a b c are tower representations in function,
// A B C are 3 towers.

void tower(int n, char a='A', char b='B', char c='C') {
	if (n == 1) {
		cout << a << "->" << c << endl;
		return;
	}
	tower(n - 1, a, c, b);
	cout << a << "->" << c << endl;
	tower(n - 1, b, a, c);
}

int main() {
	int NumberOfPlates = 3;
	tower(NumberOfPlates);
	return 0;
}
