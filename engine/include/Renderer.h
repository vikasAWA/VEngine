#pragma once 
#include "Color.h"
#include "Vector2.h"

namespace VEngine
{
	class Renderer
	{
	public:
		// begin the frame
		static void BeginFrame();

		// clear the frame
		static void Clear(const Color& color);
		
		// rendering primitives
		static void DrawCircle(
			float x,
			float y,
			float radius,
			const Color& color
		);

		static void DrawCircle(
			const Vector2& center,
			float radius,
			const Color& color
		);

		static void DrawLine(
			float startX, 
			float startY,
			float endX,
			float endY,
			const Color& color
		);

		static void DrawLine(
			const Vector2& start,
			const Vector2& end,
			const Color& color
		);

		static void DrawRectangle(
			float x,
			float y,
			float width,
			float height,
			const Color& color
		);

		static void DrawRectangle(
			const Vector2& position,
			float width,
			float height,
			const Color& color
		);

		static void DrawText(
			const char* text,
			float x,
			float y,
			float fontSize,
			const Color& color
		);

		static void DrawText(
			const char* text,
			const Vector2& position,
			float fontSize,
			const Color& color
		);
		
		// end the frame
		static void EndFrame();
	};
}