#include "Person.h"
#include <string>
using namespace std;

Person::Person(string firstName, string lastName) {
    m_firstName = firstName;
    m_lastName = lastName;
}

void Person::setFirstName(string firstName) {
    m_firstName = firstName;
}

string Person::getFirstName() const {
    return m_firstName;
}

void Person::setLastName(string lastName) {
    m_lastName = lastName;
}

string Person::getLastName() const {
    return m_lastName;
}