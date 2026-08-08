
#ifndef SK_CORE_LOG_SINKS_CONSOLESINK_HPP
#define SK_CORE_LOG_SINKS_CONSOLESINK_HPP

#include "Sketch/Core/Log/Sink.hpp"

namespace sk
{
    namespace Log
    {
        class ConsoleSink : public Sink
        {
            public:

            virtual void log(const ::std::string& message) override;
        };
    }
}

#endif