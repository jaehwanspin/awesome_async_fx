#include "awesome_async_fx/task/task.hpp"

namespace _AASYNC_NAMESPACE_NAME
{

task::task()
{
	this->terminated = true;
	this->temp_name = "";
}
task::~task()
{

}
status_type task::open()
{

}


}