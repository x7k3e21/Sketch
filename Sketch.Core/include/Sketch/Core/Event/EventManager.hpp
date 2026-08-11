
#ifndef SK_CORE_EVENT_EVENTMANAGER_HPP
#define SK_CORE_EVENT_EVENTMANAGER_HPP

#include <functional>

#include <memory>
#include <vector>

#include <unordered_map>

#include "Sketch/Core/Event/Event.hpp"

namespace sk
{
    using EventHandler = ::std::function<void (const ::std::unique_ptr<Event>&)>;

    class EventManager
    {
        public:

        static EventManager& getInstance()
        {
            static EventManager s_Instance;
            return s_Instance;
        }

        void subscribe(EventType type, EventHandler callback);
        // void unsubscribe();

        void queueEvent(::std::unique_ptr<Event> event);

        void processEvents();

        private:

        ::std::unordered_map<EventType, ::std::vector<EventHandler>> m_Callbacks;

        ::std::vector<::std::unique_ptr<Event>> m_EventQueue;
    };
}

#endif