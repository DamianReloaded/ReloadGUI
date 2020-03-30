#ifndef owl_reload_application_h
#define owl_reload_application_h

#include <reload/window.h>

namespace reload {

    class application
    {
        public:
                        application     ();
            virtual     ~application    ();

            int         run             ();
    };

}

#endif
