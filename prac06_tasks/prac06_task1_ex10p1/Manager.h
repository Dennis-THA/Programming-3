#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

namespace HR
{
    class Manager : public Employee
    {
    public:
        using Employee::Employee;

       operator std::string () const;
    };
}

#endif 
