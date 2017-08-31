#include "Vector3.h"

Vector3::Vector3()
{
}

Vector3::Vector3(double a, double b, double c):
a(a),
b(b),
c(c)
{
	
}

Vector3::Vector3(const Vector3 &other){
	a = other.a;
	b = other.b;
	c = other.c;
}

Vector3::~Vector3()
{
}

Vector3 Vector3::operator+(Vector3 rhs){
	 Vector3 reVec(a+rhs.a, b+rhs.b, c+rhs.c);
	 return reVec;
};

Vector3 Vector3::operator-(Vector3 rhs){
	Vector3 reVec(a-rhs.a, b-rhs.b, c-rhs.c);
	 return reVec;
};

 
double Vector3::operator*(Vector3 rhs){
	return a*rhs.a+b*rhs.b+c*rhs.c;
}; 

