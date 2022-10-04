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
Vector Vector::operator+=(const Vector& vect)
{
	x+=vect.x;
	y+=vect.y;

	return *this;
}

Vector& Vector::operator+(const Vector& vect)
{
	return Vector(x+vect.x, y+vect.y);
}

// Operation soustraction
Vector& Vector::operator-=(const Vector& vect)
{
	x-=vect.x;
	y-=vect.y;

	return *this;
}

Vector& Vector::operator-(const Vector& vect)
{
	return Vector(x-vect.x, y-vect.y);
}


// Operation multiplication
Vector& Vector::operator*=(const Vector& vect)
{
	x*=vect.x;
	y*=vect.y;

	return *this;
}

Vector& Vector::operator*=(int i)
{
	x *= i;
	y *= i;
	
	return *this;
}

