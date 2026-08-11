
#ifndef SK_CORE_EVENT_EVENT_HPP
#define SK_CORE_EVENT_EVENT_HPP

namespace sk
{
    enum class EventType
    {
        NONE = 0,
        TEST = 1
    };

    class Event
    {
        public:

        virtual ~Event() = default;

        virtual EventType getType() = 0;
    };
}

#endif