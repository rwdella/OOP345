// Move Constructor and Assignment Operator
// moveApp.cpp

#include <iostream>
#include "array.h"
using namespace std;

int main() {
	const int size = 5;
	Array x(size), z;

	for (int i = 0; i < size; i++)
		x[i] = i;
	
	z = x;

	Array *ptr = new Array(x);

	for (int i = size - 1; i >= 1; i--)
		std::cout << z[i] << ',';
	std::cout << z[0] << std::endl;

	z = Array(size);

	int WaitKey;
	cin >> WaitKey;
}