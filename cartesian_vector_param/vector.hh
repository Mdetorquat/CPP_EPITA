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
    Vector(int x, int y);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
	Vector operator+(const Vector& rhs);
	Vector& operator-=(const Vector& rhs);
	Vector operator-(const Vector& rhs);
	value operator*(const Vector& rhs);
	value Vector::operator[](const value val);
    // More to go

private:
// Private Member functions here

// Notre vecteur en fonction de NDIM
value coordonnees[NDIM];

// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here

std::ostream& operator<<(std::ostream& ost, const Vector& rhs);
//Vector& operator+(const Vector& vect1, const Vector vect2);
Vector operator*(const Vector& rhs, const value val);
Vector operator*=(const Vector& rhs, const value val);
Vector operator+=(const Vector& rhs, const value val);
