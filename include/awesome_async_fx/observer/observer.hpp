#ifndef _AASYNC_EVENT_OBSERVER_HPP_
#define _AASYNC_EVENT_OBSERVER_HPP_
#include "../../aasync_namespace.hpp"

namespace std { class string; }

namespace _AASYNC_NAMESPACE_NAME
{

class status_type;
class event_message;

class observer
{
private:
	std::string module_name;


public:
	observer(std::string module_name);
	virtual ~observer();

public:
	inline void set_module_name(std::string module_name);
	inline std::string get_module_name();

public:
	virtual status_type notify(aasync::event_message& event_message);



};

}

#endif