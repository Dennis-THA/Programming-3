#include "Employee.h"

namespace HR
{
    Employee::Employee(int id, std::string firstName, std::string lastName)
        : Person(std::move(firstName), std::move(lastName)), m_id(id)
    {
    }

    int Employee::getID() const
    {
        return m_id;
    }

    void Employee::setID(int id)
    {
        m_id = id;
    }

    HR::Employee::operator std::string() const
    {
        std::string idStr = std::to_string(m_id);
        return "Employee with ID = " + idStr + ", Name = " + getFirstName() + " " + getLastName() + ", " + "Initials: (" + getInitials() + ")";
    }
}