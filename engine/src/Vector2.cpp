#include "Vector2.h"
#include <cmath>

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


	float Vector2::Length() const {
		return std::sqrt(x * x + y * y);
	}

	Vector2 Vector2::Normalized() const
	{
		float len = Length();
		if (len == 0.0f)
			return Vector2();

		return *this / len;
	}

	Vector2 Vector2::Perpendicular() const
	{
		return Vector2(-y, x);
	}
}
