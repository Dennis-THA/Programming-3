#include <iostream>
#include "Person.h"

using namespace std;

int main() {
    // Creating a Person object on the stack
    Person person("Chris", "Evans");
    cout << "Person on stack: " << person.getFirstName() << " " << person.getLastName() << std::endl;

    // Creating a Person object on the heap
    Person* ptrPerson = new Person("Steve", "Rogers");
    cout << "Person on heap: " << ptrPerson->getFirstName() << " " << ptrPerson->getLastName() << std::endl;

    delete ptrPerson;
    ptrPerson = nullptr;

    return 0;
}