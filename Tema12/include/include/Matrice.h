#ifndef MATRICE_H
#define MATRICE_H
#include "Universal.h"

class Matrice
{
    public:
        Matrice();
        Matrice(unsigned int dim, int value = 0);
        Matrice(int **a, unsigned int dim);
         ~Matrice();
        Matrice(const Matrice& other);
        Matrice& operator=(const Matrice& other);
        int& operator() (unsigned int row, unsigned int column);
        int operator() (unsigned int row, unsigned int column) const;
        unsigned int getSize() const { return size; }
        void resize(unsigned int t_size, bool keepData=false);

    protected:
        void allocateMatrix(int **&m_alloc, unsigned int m_size);
        void cleanUpMatrix(int **&m_alloc, unsigned int m_size);
        void matrixCopy(int **&dest, int **src, unsigned int m_size);

    private:
        int **m_data;
        unsigned int size;
};

#endif // MATRICE_H
