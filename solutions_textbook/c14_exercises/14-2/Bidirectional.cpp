#include <iostream>
#include <fstream>
#include <string>
#include <string_view>
#include <format>
#include <exception>

using namespace std;

//// Previously, this function returned a Boolean, true on success, false on failure.
//// Thanks to the use of exceptions, if the function returns normally,
//// we know that there were no failures, so we can change the return type to void.
// Throws runtime_error on error.
void changeNumberForID(string_view filename, int id, string_view newNumber);

int main()
{
	try {
		changeNumberForID("data.txt", 263, "415-555-3333");
	} catch (const exception& caughtException) {
		cerr << caughtException.what() << endl;
	}
}

void changeNumberForID(string_view filename, int id, string_view newNumber)
{
	fstream ioData{ filename.data() };
	if (!ioData) {
		throw runtime_error("Error while opening file " + string(filename));
	}

	// Loop until the end of file
	while (ioData) {
		// Read the next ID.
		int idRead;
		ioData >> idRead;
		if (!ioData)
			break;

		// Check to see if the current record is the one being changed.
		if (idRead == id) {
			// Seek the write position to the current read position.
			ioData.seekp(ioData.tellg());
			if (!ioData) {
				throw runtime_error{ "Failed to seek to the proper position in the output stream." };
			}
			// Output a space, then the new number.
			ioData << " " << newNumber;
			if (!ioData) {
				throw runtime_error{ "Failed to write to the output stream." };
			}
			break;
		}

		// Read the current number to advance the stream.
		string number;
		ioData >> number;
		if (!ioData) {
			throw runtime_error{ "Failed to read next number from the input stream." };
		}
	}
}