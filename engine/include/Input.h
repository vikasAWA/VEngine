#pragma once 
#include "Key.h"

namespace VEngine
{
	class Input
	{
	public:
		static bool IsKeyDown(Key key);
		static bool IsKeyPressed(Key key);
		static bool IsKeyReleased(Key key);	
	};
}