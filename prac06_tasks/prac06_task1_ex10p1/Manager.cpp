#include "Manager.h"

HR::Manager::operator std::string() const
{
    return "Manager -> " + HR::Employee::operator std::string();
}