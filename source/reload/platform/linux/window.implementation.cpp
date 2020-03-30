#include <window.implementation.h>
#include <iostream>

using namespace reload;

window::implementation::implementation ()
{
    std::cout << "implementation loaded" <<std::endl;
    glewInit();
}

window::implementation::~implementation()
{

}
