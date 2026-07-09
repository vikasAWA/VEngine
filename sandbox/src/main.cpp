#include "Engine.h"

int main()
{
	VEngine::Init();
	while (VEngine::Running())
	{
		VEngine::BeginFrame();

		// Game logic

		VEngine::EndFrame();
	}
	VEngine::Shutdown();
	return 0;
}