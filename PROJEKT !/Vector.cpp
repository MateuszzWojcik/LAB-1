#include "Vector.h"

Vector::Vector(double x, double y, double z) : x(x), y(y), z(z) {}
Vector::Vector(const Vector& other) : x(other.x), y(other.y), z(other.z) {}