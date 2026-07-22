add_library(VEngine)

target_sources(VEngine 
	PRIVATE 
	"src/Application.cpp" 
	"src/Renderer.cpp" 
	"src/Window.cpp" 
	"include/Color.h" 
	"src/Vector2.cpp")

target_include_directories(VEngine PUBLIC include )

target_link_libraries(VEngine PRIVATE raylib)