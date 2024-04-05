#include <cstddef>
// import <iostream>;
#include <iostream>
// #include <array>
#include <vector>

using namespace std;

int main()
{
	const size_t numberOfElements{ 10 };
	// int* values{ new int[numberOfElements] };
	// array<int, numberOfElements> values {};  // NOTE {}, to init to all zeros
	vector<int> values;  // NOTE nothing to init!

	// Set values to their index value.
	// for (int index{ 0 }; index < numberOfElements; ++index) {
	// 	values[index] = index;
	// }
	// for (int index{ 0 }; index < values.size(); ++index) {
	// 	// We need index to set value
	// 	values[index] = index;
	// }
	// for (int index{ 0 }; index < values.size(); ++index) {
	for (int index{ 0 }; index < numberOfElements; ++index) {
		// We need index to set value
		values.push_back(index);
	}
	// Set last value to 99.
	// values[10] = 99;
	//// Array indices are zero-based, so the index of the 
	//// last value is 9, not 10.
	// values[numberOfElements-1] = 99;
	cout << "LAST " << values.back() << endl;
	values.back() = 99;  // NOTE!!! the same for array and vector

	// Print all values.
	// for (int index{ 0 }; index <= numberOfElements; ++index) { //BUG: should be '<'. But did it crash?
	// for (int index{ 0 }; index <= numberOfElements+20; ++index) { //EXPLORE: should be '<'. But did it crash?
	// for (int index{ 0 }; index < numberOfElements; ++index) {
	// 	//// Out-of-bounds access due to <= instead of <
	// 	cout << values[index] << " ";
	// }
	for (const auto& value: values) {  // NOTE!! the same for array and vector
		cout << value << " ";
	}

}
