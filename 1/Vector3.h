#ifndef VECTOR3_H
#define VECTOR3_H
#include <iostream>

class Vector3
{
public:
	Vector3(); // zero vector 
	Vector3(double a, double b, double c); // vector with a, b, c init values
	Vector3(const Vector3 &other);  // copy other vector
	~Vector3();
	
	Vector3 operator+(Vector3 rhs); // add component by component
	Vector3 operator-(Vector3 rhs); // sub component by component
	double operator*(Vector3 rhs); // dot product of wo vectors, scalar product
private:
double a, b, c;

friend std::ostream& operator<<(std::ostream&, Vector3);
};

std::ostream& operator<<(std::ostream &out, Vector3 rhs);

#endif // VECTOR3_H
