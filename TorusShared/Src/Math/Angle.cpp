#include "Angle.h"
#include <cmath>

Angle::Angle(double radians) :
	Radians(radians)
{ }

double Angle::Sin() {
	return std::sin(Radians);
}

double Angle::Cos() {
	return std::cos(Radians);
}

#pragma region Arithmetic Operators
Angle Angle::operator+(const Angle& other) {
	return Angle(Radians + other.Radians);
}

Angle Angle::operator-(const Angle& other) {
	return Angle(Radians - other.Radians);
}

Angle Angle::operator*(const Angle& other) {
	return Angle(Radians * other.Radians);
}

Angle Angle::operator/(const Angle& other) {
	return Angle(Radians / other.Radians);
}
#pragma endregion

#pragma region Assignment Operators
Angle Angle::operator=(const Angle& other) {
	Radians = other.Radians;
	return *this;
}

Angle Angle::operator+=(const Angle& other) {
	Radians += other.Radians;
	return *this;
}
Angle Angle::operator-=(const Angle& other) {
	Radians -= other.Radians;
	return *this;
}
Angle Angle::operator*=(const Angle& other) {
	Radians *= other.Radians;
	return *this;
}

Angle Angle::operator/=(const Angle& other) {
	Radians /= other.Radians;
	return *this;
}
#pragma endregion

#pragma region Comparison Operators
bool Angle::operator==(const Angle& other) const {
	return Radians == other.Radians;
}

bool Angle::operator!=(const Angle& other) const {
	return Radians != other.Radians;
}

bool Angle::operator>(const Angle& other) const {
	return Radians > other.Radians;
}

bool Angle::operator<(const Angle& other) const {
	return Radians < other.Radians;
}

bool Angle::operator>=(const Angle& other) const {
	return Radians >= other.Radians;
}

bool Angle::operator<=(const Angle& other) const {
	return Radians <= other.Radians;
}
#pragma endregion