#include "Matrice.h"

Matrice::Matrice(){}

Matrice::Matrice(unsigned int dim, int value) : size(dim){
    allocateMatrix(m_data, dim);
    unsigned ind1, ind2;
    for(ind1 = 0; ind1 < size; ind1++){
        for(ind2 = 0; ind2 < size; ind2++)
            m_data[ind1][ind2] = value;
    }
}

Matrice::Matrice(int **a, unsigned int dim) : size(dim)
{
    allocateMatrix(m_data, dim);
    matrixCopy(m_data, a, dim);
}

Matrice::~Matrice()
{
    cleanUpMatrix(m_data, size);
}

Matrice::Matrice(const Matrice& other){
    unsigned int other_size = other.getSize();
    if(other_size != size) {
        cleanUpMatrix(m_data, size);
        other_size = size;
        allocateMatrix(m_data, other_size);
    }
    matrixCopy(m_data, other.m_data, other_size);
}

Matrice& Matrice::operator=(const Matrice& rhs)
{

    if (this == &rhs)
        return *this;
    if(size != rhs.size) {
        throw std::invalid_argument("Matrix does not have the same size");
        return *this;
    }
    matrixCopy(m_data, rhs.m_data, size);
    return *this;
}

int& Matrice::operator()(unsigned int row, unsigned int column)
{
    if(row <  0 && column >= size){
        throw std::out_of_range("Index out of bounds");
    }
    return m_data[row][column];
}

int Matrice::operator()(unsigned int row, unsigned int column) const
{
    if(row < 0 && column >= size){
        throw std::out_of_range("Index out of bounds");
    }
    return m_data[row][column];
}

void Matrice::allocateMatrix(int **&m_alloc, unsigned int m_size)
{
    try {
        m_alloc = new int*[m_size];
        for(unsigned int i = 0; i < m_size; ++i)
            m_alloc[i] = new int[m_size];
    } catch(std::bad_alloc& ba) {
        cout<<"Error : "<<ba.what()<<" for temp_data";
    }
}

void Matrice::cleanUpMatrix(int **&m_alloc, unsigned int m_size)
{
    for(unsigned int i = 0; i < m_size; ++i) delete [] m_alloc[i];
    delete [] m_alloc;
}

void Matrice::matrixCopy(int **&dest, int **src, unsigned int m_size){
    unsigned int index1, index2;
    for(index1 = 0; index1 < m_size; index1 ++){
        for(index2 = 0; index2 < m_size; index2 ++)
            dest[index1][index2] = src[index1][index2];
    }
}
