#pragma once
// export module person;

// import <string>;
#include <string>
// import <format>;
#include <iostream>

// export namespace HR
namespace HR
{
	class Person
	{
	public:
		// Two-parameter constructor automatically creates initials and
		// delegates the work to the three-parameter constructor.
		Person(std::string firstName, std::string lastName)
			// : Person{ std::move(firstName), std::move(lastName),
			: Person{firstName, lastName,
			// std::format("{}{}", firstName[0], lastName[0]) 
			firstName.substr(0,1) + lastName.substr(0,1) 
			}
		{
			std::cout << firstName.substr(0,1) << lastName.substr(0,1) << std::endl;
			// std::cout << "I am Person";
			// std::cout << "firstName=" << firstName;
			// std::cout << "lastName=" << lastName;
		}

		Person() = default;

		Person(std::string firstName, std::string lastName, std::string initials)
			: m_firstName{ std::move(firstName) }
			, m_lastName{ std::move(lastName) }
			, m_initials{ std::move(initials) }
		{
			std::cout << "I am Person" << std::endl; 
			// std::cout << "firstName=" << firstName << std::endl;
			// std::cout << "lastName=" << lastName << std::endl;
			// std::cout << "initials=" << initials << std::endl;
			std::cout << "firstName=" << m_firstName << std::endl;
			std::cout << "lastName=" << m_lastName << std::endl;
			std::cout << "initials=" << m_initials << std::endl;
		}

		virtual ~Person() = default; // A virtual destructor!

		virtual const std::string& getFirstName() const { return m_firstName; }
		virtual void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

		virtual const std::string& getLastName() const { return m_lastName; }
		virtual void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

		virtual const std::string& getInitials() const { return m_initials; }
		virtual void setInitials(std::string initials) { m_initials = std::move(initials); }

	private:
		std::string m_firstName;
		std::string m_lastName;
		std::string m_initials;
	};
}
