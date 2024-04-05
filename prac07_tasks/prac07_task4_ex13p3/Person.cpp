#include "Person.h"

Person::Person(std::string firstName, std::string lastName)
	: Person{firstName, lastName,
			 // std::format("{}{}", firstName[0], lastName[0])
			 firstName.substr(0, 1) + lastName.substr(0, 1)}
{
}

Person::Person(std::string firstName, std::string lastName, std::string initials)
	: m_firstName{std::move(firstName)}, m_lastName{std::move(lastName)}, m_initials{std::move(initials)}
{
}

const std::string &Person::getFirstName() const
{
	return m_firstName;
}

void Person::setFirstName(std::string firstName)
{
	m_firstName = std::move(firstName);
}

const std::string &Person::getLastName() const
{
	return m_lastName;
}

void Person::setLastName(std::string lastName)
{
	m_lastName = std::move(lastName);
}

const std::string &Person::getInitials() const
{
	return m_initials;
}

void Person::setInitials(std::string initials)
{
	m_initials = std::move(initials);
}

bool Person::operator>(const Person &person) const
{
	if (this->m_lastName > person.getLastName())
	{
		return true;
	}
	else if (this->m_lastName < person.getLastName())
	{
		return false;
	}
	else
	{
		return this->m_firstName > person.getFirstName();
	}
}

bool Person::operator<(const Person &person) const
{
	if (this->m_lastName < person.getLastName())
	{
		return true;
	}
	else if (this->m_lastName > person.getLastName())
	{
		return false;
	}
	else
	{
		return this->m_firstName < person.getFirstName();
	}
}

bool Person::operator==(const Person &person) const
{
	if (this->m_lastName == person.getLastName() && this->m_firstName == person.getFirstName())
	{
		return true;
	}
	else{
		return false;
	}
}
bool Person::operator!=(const Person &person) const
{
	if (this->m_lastName != person.getLastName() || this->m_firstName != person.getFirstName())
	{
		return true;
	}
	else{
		return false;
	}
}


bool Person::operator<=(const Person &person) const
{
	if (this->m_lastName <= person.getLastName())
	{
		return true;
	}
	else if (this->m_lastName >= person.getLastName())
	{
		return false;
	}
	else
	{
		return this->m_firstName <= person.getFirstName();
	}
}

bool Person::operator>=(const Person &person) const
{
	if (this->m_lastName >= person.getLastName())
	{
		return true;
	}
	else if (this->m_lastName <= person.getLastName())
	{
		return false;
	}
	else
	{
		return this->m_firstName >= person.getFirstName();
	}
}

std::ostream &operator<<(std::ostream &os, const Person &person)
{
	os << "Person: " + person.getFirstName() + " " + person.getLastName() + ", " + "Initials: " + person.getInitials();
	return os;
}