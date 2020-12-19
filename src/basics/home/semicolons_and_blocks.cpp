#include <iostream>
using namespace std;

void add(int x, int y) {
	cout << x+y << endl;
}

// main() is where program execution begins.
int main(int argc, char const *argv[]) {
	int y;
	int x = y;
	y = y + 1;
	add(x, y);
	// is the same as x=y; y = y + 1; add(x, y);
	int age;
	int apples, oranges;
	int fruit = apples + oranges; // Get the total fruit
	cout << fruit;
	return 0;
}