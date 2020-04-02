#ifndef _AASYNC_TIMER_HPP_
#define _AASYNC_TIMER_HPP_
#include "../aasync_namespace.hpp"

#include <ctime>
#include <chrono>

namespace _AASYNC_NAMESPACE_NAME
{

class timer
{
private:
    std::chrono::time_point<std::chrono::system_clock> start_time;
    std::chrono::time_point<std::chrono::system_clock> end_time;
    bool is_running = false;
public:
    void start()
    {
        this->start_time = std::chrono::system_clock::now();
        this->is_running = true;
    }
    
    void stop()
    {
        this->end_time = std::chrono::system_clock::now();
        this->is_running = false;
    }
    
    double elapsed_milliseconds()
    {
        std::chrono::time_point<std::chrono::system_clock> endTime;
        
        if(this->is_running)
        {
            this->end_time = std::chrono::system_clock::now();
        }
        else
        {
            this->end_time = this->end_time;
        }
        
        return
            std::chrono::duration_cast<std::chrono::milliseconds>(
                end_time - start_time
            ).count();
    }
    
    double elapsedSeconds()
    {
        return elapsed_milliseconds() / 1000.0;
    }
};

}

#endif