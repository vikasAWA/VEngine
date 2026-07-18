#pragma once 
#include "Color.h"

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
			int x, 
			int y, 
			float radius, 
			const Color& color
		);

		static void DrawLine(
			int startX, 
			int startY, 
			int endX, 
			int endY, 
			const Color& color
		);

		static void DrawRectangle(
			int x,
			int y,
			int width,
			int height,
			const Color& color
		);

		static void DrawText(
			const char* text,
			int x,
			int y,
			int fontSize,
			const Color& color
		);
		
		// end the frame
		static void EndFrame();
	};
}