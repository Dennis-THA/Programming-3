#include "Director.h"

HR::Director::operator std::string() const
{
    return "Director -> " + HR::Employee::operator std::string();
}