#pragma once 
#include "Color.h"

namespace VEngine
{
	class Renderer
	{
	public:
		static void BeginFrame();
		static void Clear(const Color& color);

		static void DrawCircle(int x, int y, float radius, const Color& color);
		static void EndFrame();
	};
}