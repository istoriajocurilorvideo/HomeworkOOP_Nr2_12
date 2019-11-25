#ifndef VECTOR_H
#define VECTOR_H
#include "Universal.h"

class Vector
{
    public:
        Vector(int *v, int dim);
        virtual ~Vector();
        Vector(const Vector& other);
        Vector& operator=(const Vector& other);

    protected:

    private:
};

#endif // VECTOR_H
