// greeting.cpp


#include "greeting.hpp"


namespace greeting {


std::string generate_greeting(std::string name)
{
    return "Hello, " + name + "!";
}


}