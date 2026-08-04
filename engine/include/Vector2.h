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
		Vector2& operator+=(const Vector2& other);
		Vector2& operator-=(const Vector2& other);
		Vector2& operator*=(float scalor);
		Vector2& operator/=(float scalor);

		float Length() const;
		Vector2 Normalized() const;
		Vector2 Perpendicular() const;
		float Dot(const Vector2& other) const;
	};
}