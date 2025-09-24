#pragma once

#include <cmath>

class Angle {
private:
	double Radians;

public:
	Angle(double radians) :
		Radians(radians)
	{ }

	double Sin() {
		return std::sin(Radians);
	}

	double Cos() {
		return std::cos(Radians);
	}

#pragma region Arithmetic Operators
	Angle operator+(const Angle& other) {
		return Angle(Radians + other.Radians);
	}

	Angle operator-(const Angle& other) {
		return Angle(Radians - other.Radians);
	}

	Angle operator*(const Angle& other) {
		return Angle(Radians * other.Radians);
	}

	Angle operator/(const Angle& other) {
		return Angle(Radians / other.Radians);
	}
#pragma endregion

#pragma region Assignment Operators
	Angle operator=(const Angle& other) {
		Radians = other.Radians;
		return *this;
	}

	Angle operator+=(const Angle& other)
	{
		Radians += other.Radians;
		return *this;
	}

	Angle operator-=(const Angle& other) {
		Radians -= other.Radians;
		return *this;
	}

	Angle operator*=(const Angle& other) {
		Radians *= other.Radians;
		return *this;
	}

	Angle operator/=(const Angle& other) {
		Radians /= other.Radians;
		return *this;
	}
#pragma endregion

#pragma region Comparison Operators
	bool operator==(const Angle& other) const {
		return Radians == other.Radians;
	}

	bool operator!=(const Angle& other) const {
		return Radians != other.Radians;
	}

	bool operator>(const Angle& other) const {
		return Radians > other.Radians;
	}

	bool operator<(const Angle& other) const {
		return Radians < other.Radians;
	}

	bool operator>=(const Angle& other) const {
		return Radians >= other.Radians;
	}

	bool operator<=(const Angle& other) const {
		return Radians <= other.Radians;
	}
#pragma endregion
};