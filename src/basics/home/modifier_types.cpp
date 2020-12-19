#include <iostream>
using namespace std;
 
/* This program shows the difference between
   * signed and unsigned integers.
*/
int main() {
	unsigned x;
	unsigned int y;
	short int i;           // a signed short integer
	short unsigned int j;  // an unsigned short integer

	cout << x << " " << y << endl;

	j = 50000;

	i = j;
	cout << i << " " << j;

	return 0;
}