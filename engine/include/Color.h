#pragma once 
#include <cstdint>

namespace VEngine
{
	struct Color
	{
		uint8_t r;
		uint8_t g;
		uint8_t b;
		uint8_t a;
	};

	namespace Colors
	{
		inline constexpr Color White{ 255,255,255,255 };
		inline constexpr Color Black{ 0,0,0,255 };
		inline constexpr Color Red{ 255,0,0,255 };
		inline constexpr Color Green{ 0,255,0,255 };
		inline constexpr Color Blue{ 0,0,255,255 };
		inline constexpr Color SkyBlue{ 135,206,235,255 };
		inline constexpr Color Yellow{ 255,255,0,255 };
		inline constexpr Color Gray{ 128,128,128,255 };
		inline constexpr Color Cyan{ 0, 255, 255, 255 };
		inline constexpr Color Magenta{ 255, 0, 255, 255 };
		inline constexpr Color DarkGray{ 169, 169, 169, 255 };
	}
}
