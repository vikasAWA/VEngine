#include "Window.h"
#include <raylib.h>

namespace VEngine
{
	
	void Window::Create()
	{
		InitWindow(1900, 1200, "VEngine");
	}
	bool Window::Running()
	{
		return !WindowShouldClose();
	}
	void Window::Destroy()
	{
		CloseWindow();
	}
	void Window::SetTargetFPS(int fps)
	{
		::SetTargetFPS(fps);
	}
	
}