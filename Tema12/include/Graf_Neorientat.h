#ifndef GRAF_NEORIENTAT_H
#define GRAF_NEORIENTAT_H

#include "Graf.h"
#include "Lista.h"


class Graf_Neorientat : public Graf
{
    public:
        Graf_Neorientat(Lista l);
        virtual ~Graf_Neorientat();
        Graf_Neorientat(const Graf_Neorientat& other);
        Graf_Neorientat& operator=(const Graf_Neorientat& other);

    protected:

    private:
};

#endif // GRAF_NEORIENTAT_H
