#include <iostream>
#include <vector>
class Vector
{
	double x;
	double y;
	double z;
public:
	double gx() const { return x; }; // getter
	double gy() const { return y; };
	double gz() const { return z; };

	void sx(double x) { this->x = x; } // setter
	void sy(double y) { this->y = y; }
	void sz(double z) { this->z = z; }

	Vector() :x(0), y(0), z(0) {
	}
	Vector(double x, double y, double z);

	Vector(const Vector& other);
};
Vector a;
a.x = 4;
#pragma once
