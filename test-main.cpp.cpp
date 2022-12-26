#include <iostream>
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>
#include "test.cpp"

int main(int argc, char** argv)
{
    List list();
    CHECK(1 == 1);
    return Catch::Session().run(argc, argv);
}