#include "Renderer.h"
#include <raylib.h>

namespace VEngine
{
	void Renderer::BeginFrame()
	{
		BeginDrawing();	
	}

	void Renderer::Clear(const Color& color)
	{
		::Color raylibColor{color.r, color.g, color.b, color.a};
		::ClearBackground(raylibColor);

	}

	void Renderer::DrawCircle(int x, int y, float radius, const Color& color)
	{
		::DrawCircle(x, y, radius, {color.r, color.g, color.b, color.a});
	}

	void Renderer::EndFrame()
	{
		EndDrawing();
	}

}