
#include <iostream>
using namespace std;

int main()
{
    cout << "Please input string1: ";
    string userinput;
    getline(cin, userinput);
    cout << "Your string1: " << userinput << endl;


    cout << "Please input string2: ";
    string userinput2;
    getline(cin, userinput2);
    cout << "Your string2: " << userinput2 << endl;


    cout << "Sorted Result: ";
    if (userinput < userinput2) 
    {
        cout << userinput << ", " << userinput2 << endl;
    }
    else
    {
        cout << userinput2 << ", " << userinput << endl;
    }

    cout << "Finished" << endl;

}

