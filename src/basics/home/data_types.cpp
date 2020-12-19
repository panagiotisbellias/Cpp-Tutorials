#include <iostream>
using namespace std;

int main() {
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

	typedef int feet;
	feet distance;
	cout << distance;

	enum color1 { red1, green1, blue1 } c;
	c = blue1;
	cout << red1 << "\t" << green1 << "\t" << blue1 << endl;

	enum color2 { red2, green2 = 5, blue2 };
	cout << green2 << "\t" << blue2;

	return 0;
}