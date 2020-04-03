#include <awesome_async_fx/active_object/active_object.hpp>

namespace _AASYNC_NAMESPACE_NAME {

active_object::active_object()
{
    active_object::obj_list.push_back(std::shared_ptr<active_object>(this));
    
}

active_object::~active_object()
{
    if (this->joinable())
        this->join();
}


void active_object::open()
{
    // this->object_handler = std::thread(&this->run, this);
}

// void active_object::run()
// {
//     while (!this->exit_flag)
//     {
        
//     }
// }

void active_object::notify()
{

}

}