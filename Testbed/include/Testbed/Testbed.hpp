
#ifndef TESTBED_TESTBED_HPP
#define TESTBED_TESTBED_HPP

#include <Sketch/Core/Entry.hpp>
#include <Sketch/Core/Application.hpp>

namespace testbed
{
    class Testbed : public ::sk::Application
    {
        public:

        Testbed();
        ~Testbed();
    };
}

::sk::Application* ::sk::createApplication()
{
    return new testbed::Testbed();
}

#endif