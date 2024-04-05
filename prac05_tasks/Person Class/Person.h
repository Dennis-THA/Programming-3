#ifndef _PERSON_H
#define _PERSON_H
#include <string>

using namespace std;


class Person
{
private:
    string m_firstName;
    string m_lastName;
    
public:
    Person(string firstName, string lastName);
        void setFirstName(string firstName);
        string getFirstName() const;
        void setLastName(string lastName);
        string getLastName() const;
};

#endif 

