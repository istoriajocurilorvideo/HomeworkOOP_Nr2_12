#ifndef GRAF_ORIENTAT_H
#define GRAF_ORIENTAT_H

//#include "Graf.h"
#include "Matrice.h"

class Graf_Orientat //: public Graf
{
    public:
        Graf_Orientat(Matrice m);
        ~Graf_Orientat();
        Graf_Orientat(const Graf_Orientat& other);
        Graf_Orientat& operator=(const Graf_Orientat& other);
        void addEdge(int nd1, int nd2);
        void deleteEdge(int nd1, int nd2);
        void addNode(int nd);
        void deleteNode(int nd);
        bool checkNode(int nd);
        bool checkEdge(int nd1, int nd2);
        bool isConnectedComponent();

    protected:

    private:
        Matrice gom;
        void print(ostream& out) const;
        void read(istream& in);
};

#endif // GRAF_ORIENTAT_H
