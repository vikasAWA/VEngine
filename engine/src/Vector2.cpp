#include "Vector2.h"

namespace VEngine
{
	// constructers
	Vector2::Vector2() : x(0.0f), y(0.0f) {};
	Vector2::Vector2(float X, float Y) : x(X), y(Y) {};
	
	// operations
	Vector2 Vector2::operator+(const Vector2& other) const
	{
		return Vector2(
			x + other.x,
			y + other.y
		);
	}

	Vector2 Vector2::operator-(const Vector2& other) const
	{
		return Vector2(
			x - other.x,
			y - other.y
		);
	}

	Vector2 Vector2::operator*(float scalar) const
	{
		return Vector2(
			x * scalar,
			y * scalar
		);
	}

	Vector2 Vector2::operator/(float scalar) const
	{
		return Vector2(
			x / scalar,
			y / scalar
		);
	}
}
