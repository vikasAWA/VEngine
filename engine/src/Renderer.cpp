#include "Renderer.h"
#include <raylib.h>

namespace VEngine
{
	void Renderer::BeginFrame()
	{
		BeginDrawing();
		ClearBackground(SKYBLUE);
	}
	void Renderer::EndFrame()
	{
		EndDrawing();
	}
}