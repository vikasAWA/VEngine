#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"
#include <cmath>

using namespace VEngine;

namespace
{
	

}

void Sandbox::OnUpdate()
{
	Renderer::Clear(Colors::Black);
	Renderer::DrawCircle(
		Vector2(300, 200),
		100,
		Colors::Yellow
	);

	Renderer::DrawLine(
		Vector2(300, 200),
		Vector2(900, 900),
		Colors::BitPink
	);

	Renderer::DrawRectangle(
		Vector2(900, 900),
		300,
		200,
		Colors::DarkGray
	);
	Renderer::DrawText(
		"HEllo",
		Vector2(500, 500),
		100,
		Colors::Cyan
	);
}
