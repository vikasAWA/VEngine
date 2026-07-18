#include "Renderer.h"
#include <raylib.h>

namespace VEngine
{
	// begin frame
	void Renderer::BeginFrame()
	{
		BeginDrawing();	
	}

	// Rendering premitives
	void Renderer::Clear(const Color& color)
	{
		::Color raylibColor
		{
			color.r, 
			color.g, 
			color.b, 
			color.a
		};
		::ClearBackground(raylibColor);

	}

	void Renderer::DrawCircle(
		int x, 
		int y, 
		float radius, 
		const Color& color
	)
	{
		::DrawCircle(
			x, 
			y, 
			radius, 
			{
				color.r, 
				color.g, 
				color.b, 
				color.a
			}
		);
	}

	void Renderer::DrawLine(
		int startX, 
		int startY, 
		int endX, 
		int endY, 
		const Color& color
	)
	{
		::DrawLine(
			startX,
			startY,
			endX,
			endY,
			{ color.r, color.g, color.b, color.a }
		);
	}

	void Renderer::DrawRectangle(
		int x,
		int y,
		int width,
		int height,
		const Color& color
	)
	{
		::DrawRectangle(
			x,
			y,
			width,
			height,
			{
				color.r,
				color.g,
				color.b,
				color.a
			}
		);
	}

	void Renderer::DrawText(
		const char* text,
		int x,
		int y,
		int fontSize,
		const Color& color
	)
	{
		::DrawText(
			text,
			x,
			y,
			fontSize,
			{
				color.r,
				color.g,
				color.b,
				color.a
			}
		);
	}

	// this will end frame
	void Renderer::EndFrame()
	{
		EndDrawing();
	}

}