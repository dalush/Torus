#pragma once

class Angle {
private:
	double Radians;

public:
	Angle(double radians);

	double Sin();
	double Cos();

	Angle operator+(const Angle& other);
	Angle operator-(const Angle& other);
	Angle operator*(const Angle& other);
	Angle operator/(const Angle& other);

	Angle operator=(const Angle& other);
	Angle operator+=(const Angle& other);
	Angle operator-=(const Angle& other);
	Angle operator*=(const Angle& other);
	Angle operator/=(const Angle& other);

	bool operator==(const Angle& other) const;
	bool operator!=(const Angle& other) const;
	bool operator>(const Angle& other) const;
	bool operator<(const Angle& other) const;
	bool operator>=(const Angle& other) const;
	bool operator<=(const Angle& other) const;
};