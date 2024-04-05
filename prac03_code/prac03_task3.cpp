#include <iostream>

using namespace std;

string findAndReplace(string_view haystack, string_view needle, string_view replaceWith) 
{
    string result{ haystack };

    auto position {result.find(needle) };

    while (position != string::npos) {
		result.replace(position, needle.length(), replaceWith);
		position = result.find(needle, position + needle.size());
	}

	return result;

}

int main()
{
	string haystack;
	cout << "Enter a source string: ";
	getline(cin, haystack);


	string needle;
	cout << "Enter a string to find: ";
	getline(cin, needle);


	string replacement;
	cout << "Enter a string to replace: ";
	getline(cin, replacement);
    

	string result {findAndReplace(haystack, needle, replacement)};
	cout<< "haystack string: " << haystack << endl;
	cout<< "needle string: " << needle << endl;
	cout<< "replacement string: " << replacement << endl;
	cout<< "result string: " << result << endl;

	return 0;


}
