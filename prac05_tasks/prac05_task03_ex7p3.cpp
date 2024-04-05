
// import <iostream>;
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const size_t numberOfElements{ 10 };
    vector<int> values;
	// Set values to their index value.
	for (int index{ 0 }; index < numberOfElements; ++index) 
    {
		values.push_back(index);
	}

	// Set last value to 99.
	values.back() = 99; 
	// Print all values.
	
// Doesn't need to change since it is the same for arracy and vector
	for (const auto& value: values) {   
        cout << value << " ";
    }
}
   