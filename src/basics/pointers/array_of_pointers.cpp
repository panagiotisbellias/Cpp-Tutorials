#include <iostream>
 
using namespace std;
const int MAX_1 = 3;
const int MAX_2 = 4;
 
int main () {
   int  var[MAX_1] = {10, 100, 200};
   int *ptr[MAX_1];
 
   for (int i = 0; i < MAX_1; i++) {
   
      cout << "Value of var[" << i << "] = ";
      cout << var[i] << endl;
   }

   for (int i = 0; i < MAX_1; i++) {
      ptr[i] = &var[i]; // assign the address of integer.
   }
   
   for (int i = 0; i < MAX_1; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }

   const char *names[MAX_2] = { "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali" };

   for (int i = 0; i < MAX_2; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << (names + i) << endl;
   }
   
   return 0;
}