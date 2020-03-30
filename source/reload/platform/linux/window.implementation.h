#ifndef owl_reload_window_implementation_h
#define owl_reload_window_implementation_h

#include <reload/window.h>
#include <X11/Xlib.h>
#include <GL/glew.h>
#include <GL/glx.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <vector>
#include <deque>

namespace reload {

    class window::implementation
    {
        public:
                        implementation  ();
            virtual     ~implementation ();

            bool        create          ();
            void        destroy         ();


            Display*                xdisplay;
            int                     xscreen;
            Window                  xwindow;
            GLXContext              glx_context;
            XSetWindowAttributes    xattributes;
            XVisualInfo*            xvisualinfo;
            uint32_t                input_mask;
            uint32_t                depth;
            static Atom             wmdelete;
            std::vector<int>        attributelist;

    };

}

#endif
