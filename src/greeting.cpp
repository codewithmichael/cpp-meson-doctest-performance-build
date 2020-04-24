// greeting.cpp
//
// Created: 2020.04.24
// Author: Michael Spencer
// License: MIT


#include "greeting.hpp"


namespace greeting {


std::string generate_greeting(std::string name)
{
    return "Hello, " + name + "!";
}


}