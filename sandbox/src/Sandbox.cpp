#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"

using namespace VEngine;

void Sandbox::OnUpdate()
{
	Vector2 start{ 100, 100 };
	Vector2 v{ 5, 3 };

	constexpr float PixelsPerUnit = 50.0f;

	Vector2 end{ start + v * PixelsPerUnit };

	Renderer::DrawLine(
		start,
		end,
		Colors::Red
	);
	
}





