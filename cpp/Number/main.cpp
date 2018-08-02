#include <iostream>

#include "Number.hpp"

int main()
{
    // 1. Write implementation of a Number class (Number.cpp) in a way to pass the 
    // unit tests (tests/NumberTests.cpp).
    // Build/run via "make test" and "./test".
    // 
    // 2. Write a program that creates a vector/list/array (pick one) of Number-s with random
    // initial values.
    // 2.1 Sort the container in an ascending order (the sort key should be the Number.value member).
    //
    // 3. Write a derived class PositiveNumber:
    // 3.1 It will throw an exception if the init value is less than 0 or an user want to change
    //     the number to a negative one.
    // 3.3 isNegative() will throw a PositiveNumberExcpetion with "Does not apply." message.
    // 3.4 print() - no changes
    // 3.5 getAbsoulute() - override and make the output the same as getNumber().

    std::cout << "Hello world!" << std::endl;
    Number n = {};

    std::cout << n.print() << std::endl;

    return 0;
}
