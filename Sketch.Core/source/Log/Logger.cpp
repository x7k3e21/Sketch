
#include "Sketch/Core/Log/Logger.hpp"

namespace sk
{
    void Logger::attachSink(::std::shared_ptr<Log::Sink> sink)
    {
        this->m_Sinks.push_back(sink);
    }

    void Logger::setMinLevel(Log::Level level)
    {
        this->m_MinLevel = level;
    }

    void Logger::log(Log::Level level, const ::std::string& message)
    {
        if(this->m_MinLevel > level)
        {
            return;
        }

        for(auto& sink : this->m_Sinks)
        {
            sink->log(message);
        }
    }

    void Logger::trace(const ::std::string& message)
    {
        this->log(Log::Level::TRACE, message);
    }

    void Logger::debug(const ::std::string& message)
    {
        this->log(Log::Level::DEBUG, message);
    }

    void Logger::info(const ::std::string& message)
    {
        this->log(Log::Level::INFO, message);
    }

    void Logger::warn(const ::std::string& message)
    {
        this->log(Log::Level::WARN, message);
    }

    void Logger::error(const ::std::string& message)
    {
        this->log(Log::Level::ERROR, message);
    }

    void Logger::fatal(const ::std::string& message)
    {
        this->log(Log::Level::FATAL, message);
    }
}