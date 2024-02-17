#include <iostream>

using namespace std;

int main() // input 2 3 6

{

int x;

cout << "Enter first number : ";

cin >> x; // user will give ‘x’ a value.

int y, m;

cout << "Enter second number and value for taking modulus\n";

cin >> y >> m; // user will give ‘y’ a value.

int Z = (x * y) % m;

cout << "Output is: " << Z;

}

// output => 0.