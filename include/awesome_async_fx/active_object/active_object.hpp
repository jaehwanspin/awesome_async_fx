#ifndef _AASYNC_ACTIVE_OBJECT_HPP_
#define _AASYNC_ACTIVE_OBJECT_HPP_
#include "../aasync_namespace.hpp"

#ifdef USE_ETL
#include <etl/string.h>
#else
#include <string>
#endif // USE_ETL
#include <chrono>
#include <vector>

#include "./timer.hpp"

namespace _AASYNC_NAMESPACE_NAME
{
	
class active_object
{
private:
    std::string        active_object_name;
    bool               exit_flag;
    std::vector<timer> timer_list;

public:
    active_object(const std::string active_object_name);
    ~active_object();

public:
    void start_timer(uint64_t timer_id, std::chrono::seconds sec);
    void stop_timer(uint64_t tiimer_id);
    void stop_all_timer();
    

};

}

#endif