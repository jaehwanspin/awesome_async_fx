#ifndef _AASYNC_STATUS_HPP_
#define _AASYNC_STATUS_HPP_

#include "../aasync_namespace.hpp"

namespace _AASYNC_NAMESPACE_NAME
{

enum result_status
{
	SUCCESS,
	FAILED
};

enum active_object_status
{
	ENTERING,
	WAITING,
	RUNNING,
};

}

#endif