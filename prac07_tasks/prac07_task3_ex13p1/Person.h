#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <format>
#include <iostream>
#include <compare>

class Person
{
public:
    Person() = default;
    Person(std::string firstName, std::string lastName);
    Person(std::string firstName, std::string lastName, std::string initials);

    const std::string &getFirstName() const;
    void setFirstName(std::string firstName);

    const std::string &getLastName() const;
    void setLastName(std::string lastName);

    const std::string &getInitials() const;
    void setInitials(std::string initials);

    // void output() const;
    bool operator>(const Person &person) const;
    bool operator<(const Person &person) const;
    bool operator==(const Person &person) const;
    bool operator<=(const Person &person) const;
    bool operator>=(const Person &person) const;
    bool operator!=(const Person &person) const;
    // >=, >, <= , <, == , !=
    // >, < , ==

private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_initials;
};
std::ostream &operator<<(std::ostream &os, const Person &person);

#endif