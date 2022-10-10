#include "vector.hh"

using namespace std;

Vector::Vector()
{
	x = 0;
	y = 0;

}

Vector::Vector(int i, int j) : x{i}, y{j}
{
	
}

// Operation addition
Vector Vector::operator+=(const Vector& rhs)
{
	x+=rhs.x;
	y+=rhs.y;

	return *this;
}

Vector& Vector::operator+(const Vector& rhs)
{
	return Vector(x+rhs.x, y+rhs.y);
}

// Operation soustraction
Vector& Vector::operator-=(const Vector& rhs)
{
	x-=rhs.x;
	y-=rhs.y;

	return *this;
}

Vector& Vector::operator-(const Vector& rhs)
{
	return Vector(x-rhs.x, y-rhs.y);
}


// Operation multiplication
Vector& Vector::operator*=(const Vector& rhs)
{
	x*=rhs.x;
	y*=rhs.y;

	return *this;
}

Vector& Vector::operator*(const Vector& rhs, const value val)
{
	x *= i;
	y *= i;
	
	return *this;
}


value Vector::operator[](const value val)
{
	return coordonnees[val];
}
