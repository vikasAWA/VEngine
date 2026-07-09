#include "Engine.h"
#include <raylib.h>

namespace VEngine
{
	void Init()
	{
		InitWindow(800, 450, "VEngine");
		SetTargetFPS(60);
	} 

	bool Running()
	{
		return !WindowShouldClose();
	}

	void BeginFrame()
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);
	}

	void EndFrame()
	{
		EndDrawing();
	}

	void Shutdown()
	{
		CloseWindow();
	}
} 