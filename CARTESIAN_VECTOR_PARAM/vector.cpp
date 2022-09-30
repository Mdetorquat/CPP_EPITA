#include "vector.hh"

using namespace std;

Vector::Vector()
{

}

Vector::Vector(float x, float y, float z)
{
	i[0] = x;
	i[1] = y;
}

// Operation addition
Vector Vector::operator+=(const Vector vect&)
{
	i[0]+=vect.i[0];
	i[1]+=vect.i[1];

	return *this;
}

Vector Vector::operator+(const Vector vect&)
{
	return Vector(i[0]+vect.i[0], i[1]+vect.i[1]);
}

// Operation soustraction
Vector Vector::operator-=(const Vector vect&)
{
	i[0]-=vect.i[0];
	i[1]-=vect.i[1];

	return *this;
}

Vector Vector::operator-(const Vector vect&)
{
	return Vector(i[0]-vect.i[0], i[1]-vect.i[1]);
}


// Operation multiplication
Vector Vector::operator*=(const Vector vect&)
{
	i[0]*=vect.i[0];
	i[1]*=vect.i[1];

	return *this;
}

