#include <iostream>
using namespace std;

int main () {
	// an array with 5 rows and 2 columns.
	int a1[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};

	int a2[3][4] = {  
		{0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
		{4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
		{8, 9, 10, 11}   /*  initializers for row indexed by 2 */
	};
	//int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

	int threedim[5][10][4];
	int val = a2[2][3];

	// output each array element's value                      
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 2; j++) {

			cout << "a1[" << i << "][" << j << "]: ";
			cout << a1[i][j]<< endl;
		}

	for (int k = 0; k < 3; k++)
		for (int l = 0; l < 4; l++) {

			cout << "a2[" << k << "][" << l << "]: ";
			cout << a2[k][l]<< endl;
		}

	for (int m = 0; m < 5; m++)
		for (int n = 0; n < 10; n++) {
			for (int o = 0; o < 4; o++){

				cout << "threedim[" << m << "][" << n << "][" << o << "]: ";
				cout << threedim[m][n][o]<< endl;
			}
		}

	cout << val<< endl;

	return 0;
}

