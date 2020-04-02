#ifndef _AASYNC_ACTIVE_OBJECT_HPP_
#define _AASYNC_ACTIVE_OBJECT_HPP_
#include "../aasync_namespace.hpp"

#include <chrono>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <bits/shared_ptr.h>

#include "./timer.hpp"

namespace _AASYNC_NAMESPACE_NAME
{
class active_object
{
protected:
    static std::vector<std::shared_ptr<active_object>> obj_list;

    std::thread             object_handler;
    std::mutex              mtx_lock;
    std::condition_variable cond_var;
    uint32_t                identifier;
    bool                    exit_flag;
    std::vector<timer>      timer_list;

public:
    active_object();
    active_object(uint32_t identifier);
    ~active_object();

public:
    void open();
    void notify();
private:
    void run();

public:
    void start_timer(uint64_t timer_id, std::chrono::seconds sec);
    void stop_timer(uint64_t tiimer_id);
    void stop_all_timer();

};

}

#endif