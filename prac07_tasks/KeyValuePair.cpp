#include <iostream>
#include <string>
#include "KeyValuePair.h"

using namespace std;

int main()
{   
    // Using K=string, V= int datatypes
    KeyValuePair<string, int> nameContact ("Jamie", 72732294);
    cout << nameContact.getKey() << endl;


    // Using K=string, V=string datatypes
    KeyValuePair<string, string> nickName ("David", "Davy");
    cout << nickName.getKey() << endl;

    return 0;
    

}