#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"

using namespace VEngine;

void Sandbox::OnUpdate()

{
	Vector2 start{ 100, 100 };
	Vector2 v{ 6, 8 };
	float PixelsPerUnit{ 50.f };

	Vector2 end{ start + v * PixelsPerUnit };

	Renderer::DrawLine(
		start,
		end,
		Colors::Green
	);

	Renderer::DrawCircle(
		end.x,
		end.y,
		5,
		Colors::Red
	);
}





