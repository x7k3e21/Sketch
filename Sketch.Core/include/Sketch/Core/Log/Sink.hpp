
#ifndef SK_CORE_LOG_SINK_HPP
#define SK_CORE_LOG_SINK_HPP

#include <string>

namespace sk
{
    namespace Log
    {
        class Sink
        {
            public:

            virtual void log(const ::std::string& message) = 0;
        };
    }
}

#endif