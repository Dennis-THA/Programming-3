#include <cstddef>
// import <iostream>;
#include <iostream>

using namespace std;

int main()
{
	const size_t numberOfElements{ 10 };
	int* values{ new int[numberOfElements] };
	// Set values to their index value.
	for (int index{ 0 }; index < numberOfElements; ++index) {
		values[index] = index;
	}
	// Set last value to 99.
	values[numberOfElements-1] = 99; // Bug1 = index of last value is 9, not 10.
	// Print all values.
	for (int index{ 0 }; index < numberOfElements; ++index) {    // Bug2 = to fix out of bounds access (replace <= with <)
		cout << values[index] << " ";
	}

	delete[] values; // Bug3 = Memory clearance
	values = nullptr;
}
