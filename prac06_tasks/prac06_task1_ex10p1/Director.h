#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"

namespace HR
{
    class Director : public Employee
    {
    public:
        using Employee::Employee;

        operator std::string() const;
    };
}

#endif 
