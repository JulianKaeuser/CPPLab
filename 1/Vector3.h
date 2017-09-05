#ifndef VECTOR3_H
#define VECTOR3_H
#include <iostream>

template<typename T>

class Vector3
{
public:
	Vector3(){
		 
    };
	
	Vector3(T a, T b, T c):
	a(a),
	b(b),
	c(c)
	{
		
	}; // vector with a, b, c init values

	Vector3(const Vector3 &other){
		a= other.a;
		b=other.b;
		c=other.c;
	};  // copy other vector
	
	~Vector3(){
		
	};
	
	Vector3 operator+(const Vector3 &other) const{
		Vector3 reVec(a+other.a, b+other.b, c+other.c);
		return reVec;
	}; // add component by component
	    
	Vector3 operator-(const Vector3 &other) const {
		Vector3 reVec(a-other.a, b-other.b, c-other.c);
		return reVec;
	}; // sub component by component
	
	double operator*(const Vector3 &rhs)const{
		return a*rhs.a+b*rhs.b+c*rhs.c;
	}; // dot product of wo vectors, scalar product
	
	friend std::ostream& operator<<(std::ostream& out, const Vector3<T> &rhs){
	    out << rhs.a << rhs.b << rhs.c ;
        return out;
	};
private:
T a, b, c;



};


//std::ostream& operator<<(std::ostream &out, Vector3 rhs);

#include "Vector3.tpp"


#endif // VECTOR3_H
