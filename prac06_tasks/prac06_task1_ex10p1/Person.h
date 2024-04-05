#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <format>

namespace HR
{
	class Person
	{
	public:
		Person() = default;
		Person(std::string firstName, std::string lastName);
		Person(std::string firstName, std::string lastName, std::string initials);

		virtual ~Person() = default; // A virtual destructor!

		virtual const std::string &getFirstName() const;
		virtual void setFirstName(std::string firstName);

		virtual const std::string &getLastName() const;
		virtual void setLastName(std::string lastName);

		virtual const std::string &getInitials() const;
		virtual void setInitials(std::string initials);

		virtual operator std::string() const;

	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_initials;
	};
}

#endif