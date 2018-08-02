#include <gtest/gtest.h>
#include "../Number.hpp"

TEST(NumberTest, defaultConstructorTest)
{
    Number n = {};
    EXPECT_EQ(0, n.getNumber());
}

TEST(NumberTest, setNumberTest)
{
    Number n = Number();

    n.setNumber(10);

    EXPECT_EQ(n.getNumber(), 10);
}

TEST(NumberTest, getNumberTest)
{
    Number n = Number(5);
    EXPECT_EQ(n.getNumber(), 5);
}

TEST(NumberTest, isNegativeFalseTest)
{
    auto n = Number(10);
    ASSERT_FALSE(n.isNegative());
}

TEST(NumberTest, isNegativeTrueTest)
{
    auto n = Number(-1);
    ASSERT_TRUE(n.isNegative());
}

TEST(NumberTest, getAbsFromNegTest)
{
    auto n = Number(-8);
    EXPECT_EQ(8, n.getAbsolute());
}

TEST(NumberTest, getAbsFromPosTest)
{
    auto n = Number(4);
    EXPECT_EQ(4, n.getAbsolute());
}

TEST(NumberTest, sortRandomContainerTest)
{
    std::vector<Number> v {0, 2, 64, 2, 3, 6, 2, 7};

    std::sort(v.begin(), v.end());

    ASSERT_TRUE(std::is_sorted(v.begin(), v.end(), [](const Number& l, const Number& r) {
            return l.getNumber() < r.getNumber();
        }));
}
