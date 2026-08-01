#include "Sandbox.h"
#include "Renderer.h"
#include "Vector2.h"
#include "Input.h"
#include <cmath>

using namespace VEngine;

namespace
{
	Vector2 origin{ 1000, 600 };
	Vector2 vector{ 100, 300 };
	Vector2 vectorB{ 300, 100 };
	constexpr float WindowWidth{ 1900 };
	constexpr float WindowHeight{ 1600 };
	constexpr float GridSpacing{ 100 };


	void HandleInput()
	{
		// inputs controls
		if (Input::IsKeyDown(Key::Right))
			vector.x += 5.0f;
		if (Input::IsKeyDown(Key::Left))
			vector.x -= 5.0f;
		if (Input::IsKeyDown(Key::Up))
			vector.y -= 5.0f;
		if (Input::IsKeyDown(Key::Down))
			vector.y += 5.0f;
		if (Input::IsKeyDown(Key::D))
			vectorB.x += 5.0f;
		if (Input::IsKeyDown(Key::A))
			vectorB.x -= 5.0f;
		if (Input::IsKeyDown(Key::W))
			vectorB.y -= 5.0f;
		if (Input::IsKeyDown(Key::S))
			vectorB.y += 5.0f;
	}

	void DrawAxes()
	{
		Renderer::DrawLine(
			Vector2(0, origin.y),
			Vector2(WindowWidth, origin.y),
			Colors::White
		);
		Renderer::DrawLine(
			Vector2(origin.x, 0),
			Vector2(origin.x, WindowHeight),
			Colors::White
		);
	}

	// grid
	void DrawGrid()
	{
		for (float x = origin.x; x <= WindowWidth; x += GridSpacing)
		{
			Renderer::DrawLine(
				Vector2(x, 0),
				Vector2(x, WindowHeight),
				Colors::MyFavColor
			);
		}
		for (float x = origin.x; x >= 0; x -= GridSpacing)
		{
			Renderer::DrawLine(
				Vector2(x, 0),
				Vector2(x, WindowHeight),
				Colors::MyFavColor
			);
		}
		for (float y = origin.y; y <= WindowHeight; y += GridSpacing)
		{
			Renderer::DrawLine(
				Vector2(0, y),
				Vector2(WindowWidth, y),
				Colors::MyFavColor
			);
		}
		for (float y = origin.y; y >= 0; y -= GridSpacing)
		{
			Renderer::DrawLine(
				Vector2(0, y),
				Vector2(WindowWidth, y),
				Colors::MyFavColor
			);
		}
	}

	// panel
	const Vector2 PanelPos{ 20, 20 };
	const float PanelWidth{ 330.0f };
	const float PanelHeight{ 650.0f };
	const float Padding{ 35.0f };
	const float LineSpacing{ 55.0f };

	void MakeLine(float x, float y)
	{
		Renderer::DrawLine(
			Vector2(x, y),
			Vector2(x + 500, y),
			Colors::Blue
		);
	}
	void DrawLineText(
		const std::string& text,
		float x,
		float& y,
		float font,
		const Color& color=Colors::White
	)
	{
		Renderer::DrawText(text, { x, y }, font, color);
		y += LineSpacing;
	}
	

	void DrawPanel(float rawDot, float normalizedDot)
	{
		std::string status;
		if (normalizedDot > 0.9f)
			status = "Same Direction";
		else if (normalizedDot > 0.4f)
			status = "Aligned";
		else if (normalizedDot > -0.4f)
			status = "Perpendicular";
		else if (normalizedDot > -0.9f)
			status = "Opposite";
		else
			status = "Reverse";

		float x = PanelPos.x + Padding;
		float y = PanelPos.y + Padding;
		float angle =
			std::acos(normalizedDot)
			* 180.0f
			/ 3.14159265f;


		Renderer::DrawRectangle(
			PanelPos,
			PanelWidth,
			PanelHeight,
			Colors::Black
		);

		DrawLineText("Vector A", x, y, 40, Colors::Green);
		DrawLineText(
			"Pos : (" +
			std::to_string((int)vector.x) +
			", " +
			std::to_string((int)vector.y) +
			")",
			x,
			y,
			30
		);
		DrawLineText(
			"Length : " +
			std::to_string(vector.Length()),
			x,
			y,
			30
		);

		DrawLineText("Vector B", x, y, 40, Colors::SkyBlue);
		DrawLineText(
			"Pos : (" +
			std::to_string((int)vectorB.x) +
			", " +
			std::to_string((int)vectorB.y) +
			")",
			x,
			y,
			30
		);
		DrawLineText(
			"Length : " +
			std::to_string(vectorB.Length()),
			x,
			y,
			30
		);
		
		DrawLineText("Dot Product", x, y, 40, Colors::MyFavColor);
		DrawLineText(
			"Raw Dot : " +
			std::to_string((int)rawDot),
			x,
			y,
			30
		);

		DrawLineText(
			"Norm Dot : " +
			std::to_string(normalizedDot),
			x,
			y,
			30
		);
		DrawLineText(
			"Status : " + status,
			x,
			y,
			34,
			Colors::Magenta
		);

		DrawLineText(
			"Angle : " + std::to_string(angle),
			x,
			y,
			34,
			Colors::Yellow
		);



		DrawLineText("Controls", x, y, 40, Colors::MyFavColor);
		DrawLineText(
			"Arrows: Move A\n WASD: Move B",
			x,
			y,
			34
		);
	}
}

void Sandbox::OnUpdate()
{
	HandleInput();
	
	// Calculate derived values
	Vector2 end{ origin + vector };
	Vector2 endB{ origin + vectorB };
	Vector2 norm{ vector.Normalized() };
	Vector2 normEnd{ origin + norm * 100.0f };
	float rawDot = vector.Dot(vectorB);
	float normalizedDot =
		vector.Normalized().Dot(
			vectorB.Normalized()
		);

	Renderer::Clear(Colors::Black);

	
	
	DrawGrid();
	DrawAxes();

	Renderer::DrawLine(
		origin,
		end,
		Colors::Green
	);
	Renderer::DrawLine(
		origin,
		endB,
		Colors::SkyBlue
	);
	Renderer::DrawLine(
		origin,
		normEnd,
		Colors::Red
	);
	
	Renderer::DrawCircle(
		origin,
		20,
		Colors::White
	);
	Renderer::DrawCircle(
		end,
		20,
		Colors::Green
	);
	Renderer::DrawCircle(
		endB,
		20,
		Colors::SkyBlue
	);

	Renderer::DrawCircle(
		normEnd,
		20,
		Colors::Red
	);
	Renderer::DrawText(
		"A",
		Vector2(20, 20)+ end,
		40,
		Colors::Green
	);
	Renderer::DrawText(
		"B",
		Vector2(20, 20) + endB,
		40,
		Colors::SkyBlue
	);

	DrawPanel(rawDot, normalizedDot);

}







