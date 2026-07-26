#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"

using namespace VEngine;

namespace
{
	Vector2 start{ 700, 600 };
	Vector2 vec{ 100, 300 };
	constexpr float GridSpacing = 100.0f;
}

void Sandbox::OnUpdate()
{
	Renderer::Clear(Colors::Black);
	if (Input::IsKeyDown(Key::Right))
		vec.x += 5.0f;
	if (Input::IsKeyDown(Key::Left))
		vec.x -= 5.0f;
	if (Input::IsKeyDown(Key::Down))
		vec.y += 5.0f;
	if (Input::IsKeyDown(Key::Up))
		vec.y -= 5.0f;

	Vector2 end{ start + vec };
	Vector2 norm{ vec.Normalized() };
	Vector2 normEnd{ start + norm * 100.0f };
	Vector2 direction = (end - start).Normalized();
	Vector2 arrowStart = end - direction * 20.0f;
	Vector2 perpendicular = direction.Perpendicular();
	Vector2 leftPoint = arrowStart + perpendicular * 15.0f;
	Vector2 rightPoint = arrowStart - perpendicular *  15.0f;


	//Grid
	for (float x = start.x; x < 1900; x += GridSpacing)
	{
		Renderer::DrawLine(
			Vector2(x, 0),
			Vector2(x, 1200.0f),
			Colors::DarkGray
		);
	}
	for (float x = start.x; x > 0; x -= GridSpacing)
	{
		Renderer::DrawLine(
			Vector2(x, 0),
			Vector2(x, 1200.0f),	
			Colors::DarkGray
		);
	}

	for (float y = start.y; y < 1200; y += GridSpacing)
	{
		Renderer::DrawLine(
			Vector2{ 0, y },
			Vector2{ 1900, y },
			Colors::DarkGray
		);
	}
	for (float y = start.y; y > 0; y -= GridSpacing)
	{
		Renderer::DrawLine(
			Vector2{ 0, y },
			Vector2{ 1900, y },
			Colors::DarkGray
		);
	}

	Renderer::DrawLine(
		start,
		end,
		Colors::Red
	);
	Renderer::DrawLine(
		start,
		normEnd,
		Colors::Green
	);

	//arrowhead
	Renderer::DrawLine(
		leftPoint,
		end,
		Colors::Red
	);
	Renderer::DrawLine(
		rightPoint,
		end,
		Colors::Red
	);

	Renderer::DrawLine(
		Vector2(0.0f, start.y),
		Vector2(1900.0f, start.y),
		Colors::White	
	);

	Renderer::DrawLine(
		Vector2(start.x, 0.0f),
		Vector2(start.x, 1900.0f),
		Colors::White
	);
	Renderer::DrawCircle(
		start,
		10,
		Colors::White
	);
	Renderer::DrawCircle(
		end,
		10,
		Colors::Red
	);
	Renderer::DrawCircle(
		normEnd,
		10,
		Colors::Green
	);
	

}





