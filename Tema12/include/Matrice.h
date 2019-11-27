#ifndef MATRICE_H
#define MATRICE_H
#include "Universal.h"

class Matrice
{
    public:
        Matrice(int **a, unsigned int dim);
         ~Matrice();
        Matrice(const Matrice& other);
        Matrice& operator=(const Matrice& other);
        int& operator() (int row, int column);
        const int& operator() (int row, int column) const;

    protected:

    private:
        int **m_data;
        unsigned int size;
};

#endif // MATRICE_H
