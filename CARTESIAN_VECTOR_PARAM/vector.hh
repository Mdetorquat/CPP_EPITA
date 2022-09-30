#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(float x, float y);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
	Vector& operator-=(const Vector& rhs);
	Vector& operator*=(const Vector& rhs);
    // More to go

private:
// Private Member functions here

// Notre vecteur 2D
float i[2];

// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
