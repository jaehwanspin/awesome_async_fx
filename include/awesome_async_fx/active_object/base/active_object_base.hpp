#ifndef _AASYNC_ACTIVE_OBJECT_BASE_HPP_
#define _AASYNC_ACTIVE_OBJECT_BASE_HPP_

#include "../../aasync_namespace.hpp"

#include <queue>

namespace _AASYNC_NAMESPACE_NAME
{

enum status_type;
class event_message;
	
namespace basetype
{

class base_active_object
{
private:

protected:
	std::queue<aasync::event_message> message_queue;

public:
	base_active_object();
	virtual ~base_active_object();

	virtual inline aasync::status_type open(void* = nullptr);
	virtual inline aasync::status_type service();
	virtual inline aasync::status_type close();
	virtual inline aasync::status_type wait();

	virtual inline aasync::status_type notify();
	virtual inline aasync::status_type init();

	virtual inline aasync::status_type start_timer();
	virtual inline aasync::status_type stop_timer();

public:
	virtual inline size_t message_queue_size();
};

}
}

#endif