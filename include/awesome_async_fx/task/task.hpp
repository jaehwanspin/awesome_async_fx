#ifndef _AASYNC_TASK_HPP_
#define _AASYNC_TASK_HPP_
#include "../../aasync_namespace.hpp"

namespace _AASYNC_NAMESPACE_NAME
{

enum status_type;

class task
{
private:

public:
	task();
	virtual ~task();

	virtual aasync::status_type open(void* = 0);

};

}

#endif