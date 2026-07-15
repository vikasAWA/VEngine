#pragma once 

namespace VEngine
{
	class Window
	{
	public:
		static void Create();
		static bool Running();
		static void Destroy();
		static void SetTargetFPS(int fps);
	};
}