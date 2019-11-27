#ifndef GRAF_NEORIENTAT_H
#define GRAF_NEORIENTAT_H

#include "Graf.h"
#include "Lista.h"


class Graf_Neorientat : public Graf
{
    public:
        Graf_Neorientat(int noduriGN);
        Graf_Neorientat(Lista l);
        ~Graf_Neorientat();
        Graf_Neorientat(const Graf_Neorientat& other);
        Graf_Neorientat& operator=(const Graf_Neorientat& other);
        void addEdge(int nd1, int nd2);
        void deleteEdge(int nd1, int nd2);
        void addNode(int nd);
        void deleteNode(int nd);
        bool checkNode(int nd);
        bool checkEdge(int nd1, int nd2);
        bool isConnectedComponent();

    protected:

    private:
        Lista gnl;
        void print(ostream& out) const;
        void read(istream& in);
};

#endif // GRAF_NEORIENTAT_H
