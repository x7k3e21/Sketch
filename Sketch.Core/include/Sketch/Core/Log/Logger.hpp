
#ifndef SK_CORE_LOG_LOGGER_HPP
#define SK_CORE_LOG_LOGGER_HPP

#include <memory>

#include <string>
#include <vector>

#include "Sketch/Core/Log/Log.hpp"
#include "Sketch/Core/Log/Sink.hpp"

namespace sk
{
    class Logger
    {
        public:

        static Logger& getInstance()
        {
            static Logger s_Instance;
            return s_Instance;
        }

        void attachSink(::std::shared_ptr<Log::Sink> sink);

        void setMinLevel(Log::Level level);

        void log(Log::Level level, const ::std::string& message);

        void trace(const ::std::string& message);
        void debug(const ::std::string& message);

        void info(const ::std::string& message);
        void warn(const ::std::string& message);

        void error(const ::std::string& message);
        void fatal(const ::std::string& message);

        private:

        Log::Level m_MinLevel { Log::Level::TRACE };

        ::std::vector<::std::shared_ptr<Log::Sink>> m_Sinks;
    };
}

#define SK_TRACE(message) ::sk::Logger::getInstance().trace(message)
#define SK_DEBUG(message) ::sk::Logger::getInstance().debug(message)

#define SK_INFO(message) ::sk::Logger::getInstance().info(message)
#define SK_WARN(message) ::sk::Logger::getInstance().warn(message)

#define SK_ERROR(message) ::sk::Logger::getInstance().error(message)
#define SK_FATAL(message) ::sk::Logger::getInstance().fatal(message)

#endif