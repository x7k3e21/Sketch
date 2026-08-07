
#ifndef SK_CORE_ENTRY_HPP
#define SK_CORE_ENTRY_HPP

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#include "Sketch/Core/Application.hpp"

int main(int argc, char** argv)
{
    auto application = sk::createApplication();
    application->execute();

    delete application;
    
    return EXIT_SUCCESS;
}

#endif