#ifndef _AASYNC_TASK_HPP_
#define _AASYNC_TASK_HPP_
#include "../aasync_namespace.hpp"

#include <string>
#include <thread>

namespace _AASYNC_NAMESPACE_NAME
{

enum status_type;

class task
{
private:
	bool terminated;

public:
	task();
	virtual ~task();

	virtual aasync::status_type open(void* = 0);
	virtual aasync::status_type service();
	virtual aasync::status_type close();
	virtual aasync::status_type wait();

public:
	std::string temp_name;
	virtual bool is_terminated();
	
public:
	std::thread handle;
};

}

#endif