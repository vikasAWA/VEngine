#include "Sandbox.h"
#include "Renderer.h"

#include <iostream>
using namespace VEngine;

void Sandbox::OnUpdate()
{
	Renderer::Clear(VEngine::Colors::Black);
	VEngine::Renderer::DrawCircle(300, 223, 30, Colors::Red);

    VEngine::Renderer::DrawCircle(
        400,
        225,
        40,
        Colors::Yellow
    );

    VEngine::Renderer::DrawLine(
        100,
        100,
        500,
        300,
        Colors::Green
    );

    VEngine::Renderer::DrawRectangle(
        800,
        500,
        300,
        200,
        VEngine::Colors::Cyan
    );

    Renderer::DrawText(
        "Hello, VEngine!",
        700, 
        400, 
        100, 
        Colors::Magenta
    );


}