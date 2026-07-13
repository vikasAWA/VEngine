add_library(VEngine)

target_sources(VEngine 
	PRIVATE 
	"include/Application.h" 
	"src/Application.cpp")

target_include_directories(VEngine PUBLIC include )

target_link_libraries(VEngine PRIVATE raylib)