
#include <iostream>

#include "Sketch/Core/Log/Sinks/ConsoleSink.hpp"

namespace sk
{
    namespace Log
    {
        void ConsoleSink::log(const ::std::string& message)
        {
            ::std::cout << message << ::std::endl;
        }
    }
}