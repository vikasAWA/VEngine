#pragma once 

namespace VEngine
{
	class Vector2
	{
	public:
		float x;
		float y;
		Vector2();
		Vector2(float x, float y);

		// operations
		Vector2 operator+(const Vector2& other) const;
		Vector2 operator-(const Vector2& other) const;
		Vector2 operator*(float scalar) const;
		Vector2 operator/(float scalar) const;

		float Length() const;
		Vector2 Normalized() const;
		Vector2 Perpendicular() const;
	};
}