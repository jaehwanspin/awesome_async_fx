# aaaa


set (ACTIVE_OBJECT_SRC 
	"active_object/active_object.cc"
)
add_library(ACTIVE_OBJECT STATIC ${ACTIVE_OBJECT_SRC})

set (TASK_SRC
	"task/task.cc"
)
add_library(TASK_SRC STATIC ${TASK_SRC})