#ifndef _AASYNC_EVENT_MESSAGE_HPP_
#define _AASYNC_EVENT_MESSAGE_HPP_
#include "../aasync_namespace.hpp"

#ifdef USE_ETL
#include <etl/cstring.h>
#else
#include <string>
#endif // USE_ETL

namespace _AASYNC_NAMESPACE_NAME
{

class event_message
{
private:

#ifdef USE_ETL
	etl::string<20> message_name;
#else
	std::string message_name;
#endif // USE_ETL
	int management_type;
protected:


public:

public:
	inline int get_management_type();
	void set_management_type();



};

}

#endif