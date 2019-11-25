#ifndef LISTA_H
#define LISTA_H
#include "Universal.h"
#include "Vector.h"
class Lista
{
    public:
        Lista(Vector *l);
        virtual ~Lista();
        Lista(const Lista& other);
        Lista& operator=(const Lista& other);

    protected:

    private:
};

#endif // LISTA_H
