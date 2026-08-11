
#include <utility>

#include "Sketch/Core/Event/EventManager.hpp"

namespace sk
{
    void EventManager::subscribe(EventType type, EventHandler callback)
    {
        this->m_Callbacks[type].push_back(callback);
    }

    void EventManager::queueEvent(::std::unique_ptr<Event> event)
    {
        this->m_EventQueue.push_back(::std::move(event));
    }    

    void EventManager::processEvents()
    {
        // things will break if event added before finishing

        for(const auto& event : this->m_EventQueue)
        {
            for(auto callback : this->m_Callbacks[event.get()->getType()])
            {
                callback(event);
            }
        }

        this->m_EventQueue.clear();
    }
}