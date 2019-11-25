#include "Vector.h"

Vector::Vector(int *v, int dim)
{
    //ctor
}

Vector::~Vector()
{
    //dtor
}

Vector::Vector(const Vector& other)
{
    //copy ctor
}

Vector& Vector::operator=(const Vector& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
