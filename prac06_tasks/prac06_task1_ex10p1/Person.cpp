#include "Person.h"

HR::Person::Person(std::string firstName, std::string lastName)
    : Person{firstName, lastName,
             // std::format("{}{}", firstName[0], lastName[0])
             firstName.substr(0, 1) + lastName.substr(0, 1)}
{
}

HR::Person::Person(std::string firstName, std::string lastName, std::string initials)
    : m_firstName{std::move(firstName)}, m_lastName{std::move(lastName)}, m_initials{std::move(initials)}
{
}

const std::string &HR::Person::getFirstName() const
{
    return m_firstName;
}

void HR::Person::setFirstName(std::string firstName)
{
    m_firstName = std::move(firstName);
}

const std::string &HR::Person::getLastName() const
{
    return m_lastName;
}

void HR::Person::setLastName(std::string lastName)
{
    m_lastName = std::move(lastName);
}

const std::string &HR::Person::getInitials() const
{
    return m_initials;
}

void HR::Person::setInitials(std::string initials)
{
    m_initials = std::move(initials);
}


HR::Person::operator std::string() const
{
    return "Person: " + m_firstName + ", " + m_lastName + ", " + "Initials: (" + m_initials + ")";
}
