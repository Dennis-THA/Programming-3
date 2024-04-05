#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "Person.h"
#include <string>

namespace HR
{
	class Employee : public Person
	{
	public:
		Employee(int id, std::string firstName, std::string lastName);
		virtual int getID() const;
		virtual void setID(int id);
		virtual operator std::string() const;

	private:
		int m_id{ 0 };
	};
}

#endif