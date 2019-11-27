#include "Matrice.h"

Matrice::Matrice(int **a, unsigned int dim)
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
    if (this == &rhs) return *this;
    return *this;
}

int& operator() (int row, int column){

}

const int& operator() (int row, int column) const {

}
