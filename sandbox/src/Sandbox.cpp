#include "Sandbox.h"
#include "Renderer.h"

#include <iostream>

void Sandbox::OnUpdate()
{
	VEngine::Renderer::Clear({ 100, 1, 200, 100 });
	VEngine::Renderer::DrawCircle(300, 223, 30, { 255, 0, 0, 255 });
}