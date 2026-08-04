#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"
#include <cmath>

using namespace VEngine;

namespace
{
	Vector2 targetPos{ 900, 500 };
	Vector2 rocketPos{ 300, 300 };
}

void Sandbox::OnUpdate()
{
	if (Input::IsKeyDown(Key::D))
		targetPos.x += 5.0f;
	if (Input::IsKeyDown(Key::A))
		targetPos.x -= 5.0f;
	if (Input::IsKeyDown(Key::W))
		targetPos.y -= 5.0f;
	if (Input::IsKeyDown(Key::S))
		targetPos.y += 5.0f;

	Vector2 toTarget{ targetPos - rocketPos };
	Vector2 direction{ toTarget.Normalized() };
	Vector2 velocity{ direction * 4.0f };
	rocketPos  += velocity;

	Renderer::Clear(Colors::BitPink);
	Renderer::DrawCircle(
		targetPos,
		30,
		Colors::Red
	);
	Renderer::DrawCircle(
		rocketPos,
		30,
		Colors::Green
	);
}
