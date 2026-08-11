
#include <memory>

#include "Sketch/Core/Log/Logger.hpp"
#include "Sketch/Core/Log/Sinks/ConsoleSink.hpp"

#include "Sketch/Core/Event/EventManager.hpp"

#include "Sketch/Core/Application.hpp"

namespace sk
{
    Application::Application()
    {
        Logger::getInstance().attachSink(::std::make_shared<Log::ConsoleSink>());

        SK_TRACE("This is a TRACE message");
        SK_DEBUG("This is a DEBUG message");

        SK_INFO("This is a INFO message");
        SK_WARN("This is a WARN message");

        SK_ERROR("This is a ERROR message");
        SK_FATAL("This is a FATAL message");
    }

    Application::~Application()
    {
        
    }

    void Application::execute()
    {
        while(this->m_Running == true)
        {
            EventManager::getInstance().processEvents();
        }
    }
}