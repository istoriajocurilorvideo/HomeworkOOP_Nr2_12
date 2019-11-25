#ifndef GRAF_ORIENTAT_H
#define GRAF_ORIENTAT_H

#include "Graf.h"
#include "Matrice.h"

class Graf_Orientat : public Graf
{
    public:
        Graf_Orientat(Matrice m);
        virtual ~Graf_Orientat();
        Graf_Orientat(const Graf_Orientat& other);
        Graf_Orientat& operator=(const Graf_Orientat& other);

    protected:

    private:
};

#endif // GRAF_ORIENTAT_H
