#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"
#include <cmath>

using namespace VEngine;

namespace
{
	Vector2 missilePos{ 200, 300 };
	Vector2 targetPos{ 900, 400 };
	float missileSpeed{ 5.0f };
	float targetSpeed{ 6.0f };
	Vector2 missileDirection{ 1.0f, 0.0f };
	float turnSpeed{ 0.1f };
	bool gameOver{ false };
	float hitRadius{ 10.0f };
}
void Sandbox::OnUpdate()
{
	if (gameOver)
	{
		Renderer::Clear(Colors::Black);
		Renderer::DrawText(
			"Game Over",
			Vector2(600, 500),
			100.0f,
			Colors::BitPink
		);
		return;
	}

	Vector2 toTarget{ targetPos - missilePos };
	float distance{ toTarget.Length() };
	Vector2 desiredDirection{ toTarget.Normalized() };
	missileDirection += (desiredDirection - missileDirection) * turnSpeed;
	missileDirection = missileDirection.Normalized();

	Vector2 tip{ missilePos + missileDirection * 50.0f };
	Vector2 tail{ missilePos - missileDirection * 50.0f };
	Vector2 perpendicular{ missileDirection.Perpendicular() };
	Vector2 finCenter{ tail + missileDirection * 15.0f };
	Vector2 leftWing =
		finCenter + perpendicular * 30.0f;
	Vector2 rightWing =	
		finCenter - perpendicular * 30.0f;
	
	if (distance < hitRadius)
	{
		missilePos = targetPos;
		gameOver = true;
	}
	else
	{
		missilePos += missileDirection * missileSpeed;
	}

	if (Input::IsKeyDown(Key::Left))
	{
		targetPos.x -= targetSpeed;
	}
	if (Input::IsKeyDown(Key::Right))
	{
		targetPos.x += targetSpeed;
	}
	if (Input::IsKeyDown(Key::Up))
	{
		targetPos.y -= targetSpeed;
	}
	if (Input::IsKeyDown(Key::Down))
	{
		targetPos.y += targetSpeed;
	}

	Renderer::Clear(Colors::Black);
	Renderer::DrawCircle(
		targetPos,
		30,
		{255, 255, 255, 50}
	);

	Renderer::DrawLine(
		tip,
		leftWing,
		Colors::Red
	);
	Renderer::DrawLine(
		tip,
		rightWing,
		Colors::Red
	);
	Renderer::DrawLine(
		tail,
		leftWing,
		Colors::Red
	);
	Renderer::DrawLine(
		tail,
		rightWing,
		Colors::Red
	);
}
