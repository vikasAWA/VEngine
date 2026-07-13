add_executable(Sandbox)

target_sources(Sandbox 
	PRIVATE  
	src/main.cpp 
	src/Sandbox.cpp )

target_include_directories(Sandbox PRIVATE include)

target_link_libraries(Sandbox PRIVATE VEngine)