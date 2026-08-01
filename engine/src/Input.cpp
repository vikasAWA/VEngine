#include "Input.h"
#include <raylib.h>

namespace
{
	KeyboardKey ToRaylibKey(VEngine::Key key)
	{
		switch (key)
		{
		case VEngine::Key::Left: return KEY_LEFT;
		case VEngine::Key::Right:  return KEY_RIGHT;
		case VEngine::Key::Up:     return KEY_UP;
		case VEngine::Key::Down:   return KEY_DOWN;
		case VEngine::Key::Space:  return KEY_SPACE;
		case VEngine::Key::Enter:  return KEY_ENTER;
		case VEngine::Key::Escape: return KEY_ESCAPE;
		case VEngine::Key::W: return KEY_W;
		case VEngine::Key::A: return KEY_A;
		case VEngine::Key::S: return KEY_S;
		case VEngine::Key::D: return KEY_D;
		}

		return KEY_NULL;
	}
}

namespace VEngine
{
	bool Input::IsKeyDown(Key key)
	{	
		return ::IsKeyDown(ToRaylibKey(key));
	}

	bool Input::IsKeyPressed(Key key)
	{
		return ::IsKeyPressed(ToRaylibKey(key));
	}

	bool Input::IsKeyReleased(Key key)
	{
		return ::IsKeyReleased(ToRaylibKey(key));
	}
}