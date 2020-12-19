#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {

	int n[ 10 ]; // n is an array of 10 integers
	double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0, 0, 0, 0, 0, 0};

	// initialize elements of array n to 0          
	for (int i = 0; i < 10; i++) {
	  	n[i] = i + 100; // set element at location i to i + 100
	}
	balance[4] = 50.0;
	double salary = balance[9];

	cout << "Element" << setw(13) << "Value" << endl;
	// output each array element's value                      
	for (int j = 0; j < 10; j++) {
	  	cout << setw(7) << j << setw(13) << n[j] << endl;
	}

	cout << "Element" << setw(13) << "Value" << endl;
	for (int k = 0; k < 10; k++) {
		cout << setw(7) << k << setw(13) << balance[k] << endl;
	}

	cout << salary;

	return 0;
}