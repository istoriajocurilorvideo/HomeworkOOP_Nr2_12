#ifndef MATRICE_H
#define MATRICE_H
#include "Universal.h"

class Matrice
{
    public:
        Matrice(int **a);
        virtual ~Matrice();
        Matrice(const Matrice& other);
        Matrice& operator=(const Matrice& other);

    protected:

    private:
};

#endif // MATRICE_H
