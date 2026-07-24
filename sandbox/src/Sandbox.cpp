#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"

using namespace VEngine;

void Sandbox::OnUpdate()

{
	Renderer::Clear(Colors::SkyBlue);
	static Vector2 pos{ 500,500 };
	if (Input::IsKeyDown(Key::Right))
	{
		pos.x += 5;
	}
	if (Input::IsKeyDown(Key::Left))
	{
		pos.x -= 5;
	}
	if (Input::IsKeyDown(Key::Up))
	{
		pos.y -= 5;
	}
	if (Input::IsKeyDown(Key::Down))
	{
		pos.y += 5;
	}
	Renderer::DrawCircle(
		pos,
		40,
		Colors::Yellow
	);
}





