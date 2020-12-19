#include <iostream>
using namespace std;

// Variable declaration:
extern int a, b;
extern int c;
extern int d = 3, f = 5;    // declaration of d and f.

// function declaration
int func();

int main() {
	// Variable definition:
	int 	a, b;
	int 	c;
	float 	f;
	int    	i, j, k;
	char   	ch;
	float  	salary;
	double 	d;

	// actual initialization
	a = 10;
	b = 20;
	c = a + b;

	cout << c << endl;

	f = 70.0/3.0;
	cout << f << endl;

	cout << i << "\t" << j << "\t" << k << "\t" << ch << "\t" << salary << "\t" << d << endl;

	//byte z = 22;                // definition and initializes z. 
	char x = 'x';               // the variable x has the value 'x'.
	//cout << z << endl;
	cout << x << endl;

	// function call
	//int
	i = func();

	int g = 20;
	cout << g;
	//10 = 20;

	return 0;
}

// function definition
int func() {
   	return 0;
}