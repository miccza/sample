#include "Number.hpp"
#include <cmath>
#include <sstream>

void Number::setNumber(const int new_val)

    this->value = new_val;
}

int Number::getNumber() const
{
    return this->value;
}

std::string Number::print() const
{
    std::ostringstream os;
    os << "I'm a Number class with value " << this->value << ".";
    return os.str();
}

bool Number::isNegative() const
{
    return this->value < 0;
}

long Number::getAbsolute() const
{
    return std::abs(this->value);
}

bool Number::operator<(const Number& other) const
{
    return this->value < other.value;
}
