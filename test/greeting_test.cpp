// greeting_test.cpp
//
// Created: 2020.04.24
// Author: Michael Spencer
// License: MIT


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"


#include <string>
#include "greeting.hpp"


TEST_CASE("Greeting without args")
{
    REQUIRE(greeting::generate_greeting() == "Hello, World!");
}


// BDD Style

SCENARIO("Greeting generation")
{
    GIVEN("A name of \"Sam\"")
    {
        std::string name = "Sam";

        WHEN("the greeting is generated")
        {
            std::string greeting = greeting::generate_greeting(name);

            THEN("the greeting should use the given name")
            {
                CHECK(greeting == "Hello, " + name + "!");
            }
        }
    }
}