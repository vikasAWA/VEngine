#include "Application.h"
#include <raylib.h>

namespace VEngine
{
	void Application::Init()
	{
		InitWindow(1600, 1240, "VEngine");
		SetTargetFPS(60);
	}

	bool Application::Running()
	{
		return !WindowShouldClose();
	}

	void Application::BeginFrame()
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
	}

	void Application::EndFrame()
	{
		EndDrawing();
	}
	void Application::Shutdown()
	{
		CloseWindow();
	}

	void Application::Run()
	{
		Init();
		while (Running())
		{
			BeginFrame();

			OnUpdate(); // user game logic

			EndFrame();
		}
		Shutdown();
	}

}