#include <reload/window.h>
#include <window.implementation.h>

using namespace reload;

window::window ()
{
    imp = std::make_unique<window::implementation>();
}

window::~window()
{

}
