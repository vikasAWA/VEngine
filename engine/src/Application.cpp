#include "Application.h"
#include "Renderer.h"
#include "Window.h"

namespace VEngine
{

	void Application::Run()
	{
		Window::Create();
		Window::SetTargetFPS(60);

		while (Window::Running())
		{
			Renderer::BeginFrame();

			OnUpdate(); // user game logic

			Renderer::EndFrame();
	}
		Window::Destroy();
	}

}