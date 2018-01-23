#include <iostream>

#include <sqlite3.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
int main (int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
}
