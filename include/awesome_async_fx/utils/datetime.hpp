#ifndef _AASYNC_UTILS_DATETIME_HPP_
#define _AASYNC_UTILS_DATETIME_HPP_
#include "../../aasync_namespace.hpp"

namespace _AASYNC_NAMESPACE_NAME
{
namespace utils
{

class datetime
{
private:

public:
	datetime();
	datetime(uint32_t day, uint32_t month, uint32_t year = 0, uint32_t hour, uint32_t );
	~datetime();
	

};


}
}