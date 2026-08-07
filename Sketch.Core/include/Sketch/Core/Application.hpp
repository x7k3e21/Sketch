
#ifndef SK_CORE_APPLICATION_HPP
#define SK_CORE_APPLICATION_HPP

namespace sk
{
    class Application
    {
        public:

        Application();
        virtual ~Application();

        void execute();

        private:

        bool m_Running = true;
    };

    Application* createApplication();
}

#endif