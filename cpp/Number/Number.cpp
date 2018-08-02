#include "Number.hpp"

void Number::setNumber(const int new_val)
{
    // your code here
    //
    //
}

int Number::getNumber() const
{
    // your code here
    return 0;
}

std::string Number::print() const
{
    // your code here
    return "";
}

bool Number::isNegative() const
{
    // your code here
    return false;
}

long Number::getAbsolute() const
{
    // your code here
    // Try to use STL here
    return 0;
}

bool Number::operator<(const Number& other) const
{
    return this->value < other.value;
}
