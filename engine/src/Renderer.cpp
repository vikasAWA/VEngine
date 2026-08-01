#include "Renderer.h"
#include <raylib.h>

namespace VEngine
{
	void Renderer::BeginFrame()
	{
		BeginDrawing();	
	}

	// premitives
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
		float x, 
		float y, 
		float radius, 
		const Color& color
	)
	{
		::DrawCircle(
			static_cast<int>(x), 
			static_cast<int>(y),
			static_cast<int>(radius),
			{
				color.r, 
				color.g, 
				color.b, 
				color.a
			}
		);
	}

	void Renderer::DrawCircle(
		const Vector2& center,
		float radius,
		const Color& color
	)
	{
		DrawCircle(
			center.x,
			center.y,
			radius,
			color
		);
	}

	void Renderer::DrawLine(
		float startX, 
		float startY, 
		float endX, 
		float endY, 
		const Color& color
	)
	{
		::DrawLine(
			static_cast<int>(startX),
			static_cast<int>(startY),
			static_cast<int>(endX),
			static_cast<int>(endY),
			{ 
				color.r, 
				color.g, 
				color.b, 
				color.a 
			}
		);
	}

	void Renderer::DrawLine(
		const Vector2& start,
		const Vector2& end,
		const Color& color
	)
	{
		DrawLine(
			start.x,
			start.y,
			end.x,
			end.y,
			color
		);
	}

	void Renderer::DrawRectangle(
		float x,
		float y,
		float width,
		float height,
		const Color& color
	)
	{
		::DrawRectangle(
			static_cast<int>(x),
			static_cast<int>(y),
			static_cast<int>(width),
			static_cast<int>(height),
			{
				color.r,
				color.g,
				color.b,
				color.a
			}
		);
	}

	void Renderer::DrawRectangle(
		const Vector2& position,
		float width,
		float height,
		const Color& color
	)
	{
		DrawRectangle(
			position.x,
			position.y,
			width,
			height,
			color
		);
	}

	void Renderer::DrawText(
		const std::string text,
		float x,
		float y,
		float fontSize,
		const Color& color
	)
	{
		::DrawText(
			text.c_str(),
			static_cast<int>(x),
			static_cast<int>(y),
			static_cast<int>(fontSize),
			{
				color.r,
				color.g,
				color.b,
				color.a
			}
		);
	}

	void Renderer::DrawText(
		const std::string text,
		const Vector2& position,
		float fontSize,
		const Color& color
	)
	{
		DrawText(text, position.x, position.y, fontSize, color);
	}

	// Axes
	void Renderer::DrawAxes(
		const Vector2& start,
		const Vector2& end,
		const Color& color
	)
	{
		DrawLine(start, end, color);
	}

	void Renderer::EndFrame()
	{
		EndDrawing();
	}

}