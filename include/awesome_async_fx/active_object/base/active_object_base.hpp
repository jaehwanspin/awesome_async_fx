#ifndef _AASYNC_ACTIVE_OBJECT_BASE_HPP_
#define _AASYNC_ACTIVE_OBJECT_BASE_HPP_

#include "../../aasync_namespace.hpp"

namespace std { template<typename T> class queue; }

namespace _AASYNC_NAMESPACE_NAME
{

enum status_type;
class event_message;
	
namespace basetype
{

class active_object
{
private:

protected:
	std::queue<aasync::event_message> message_queue;

public:
	active_object();
	virtual ~active_object();

	virtual aasync::status_type open(void* = nullptr);
	virtual aasync::status_type service();
	virtual aasync::status_type close();
	virtual aasync::status_type wait();

	virtual aasync::status_type notify();
	virtual aasync::status_type init();

	virtual aasync::status_type start_timer();
	virtual aasync::status_type stop_timer();

public:
};

}
}

#endif