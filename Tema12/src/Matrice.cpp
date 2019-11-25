#include "Matrice.h"

Matrice::Matrice(int **a)
{
    //ctor
}

Matrice::~Matrice()
{
    //dtor
}

Matrice::Matrice(const Matrice& other)
{
    //copy ctor
}

Matrice& Matrice::operator=(const Matrice& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
