#include <cstddef>
// import <iostream>;
#include <iostream>
#include <array>

using namespace std;

int main()
{
	const size_t numberOfElements{ 10 };
    array<int, numberOfElements> values {};
	// Set values to their index value.
	for (int index{ 0 }; index < numberOfElements; ++index) {
		values[index] = index;
	}
	// Set last value to 99.
	values.back() = 99; 
	// Print all values.
	

	for (const auto& value: values) {
        cout << value << " ";
    }
}
