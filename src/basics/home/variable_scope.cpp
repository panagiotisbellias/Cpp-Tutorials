#include <iostream>
using namespace std;
 
// Global variable declaration:
int g = 20;

int main () {
   // Local variable declaration:
   int a, b;
   int c;
 
   // actual initialization
   a = 10;
   b = 20;
   c = a + b;
   g = a + b;
 
   cout << c << endl;
   cout << g << endl;

   // Local variable declaration:
   g = 10;
   cout << g;
 
   return 0;
}