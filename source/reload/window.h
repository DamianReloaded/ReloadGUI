#ifndef owl_reload_window_h
#define owl_reload_window_h

#include <memory>

namespace reload {

    class window
    {
        public:
                    window ();
            virtual ~window();

        private:
            class                           implementation;
            std::unique_ptr<implementation> imp;
    };

}

#endif
