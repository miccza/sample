#include <string>

class Number
{
public:
    Number() : value(0) {};
    Number(int val) : value(val) {}
    ~Number() {};

    void setNumber(const int new_val);
    int getNumber() const;
    std::string print() const;
    bool isNegative() const;
    long getAbsolute() const;

private:
    int value;
};
