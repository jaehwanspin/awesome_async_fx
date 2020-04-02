#include <awesome_async_fx/active_object/active_object.hpp>

namespace _AASYNC_NAMESPACE_NAME {

active_object::active_object()
{
    
}

active_object::~active_object()
{
    if (this->handler.joinable())
        this->handler.join();
}


void active_object::open()
{
    this->handler = std::thread();
}

}