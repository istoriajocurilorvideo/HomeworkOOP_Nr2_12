#include "Graf_Orientat.h"

Graf_Orientat::Graf_Orientat(Matrice m)
{

}

Graf_Orientat::~Graf_Orientat()
{
    //dtor
}

Graf_Orientat::Graf_Orientat(const Graf_Orientat& other)
{
    //copy ctor
}

Graf_Orientat& Graf_Orientat::operator=(const Graf_Orientat& rhs)
{
    if (this == &rhs)
        return *this; // handle self assignment
    //assignment operator
    return *this;
}
/*
void addEdge(int nd1, int nd2);
void deleteEdge(int nd2, int nd2);
void addNode(int nd);
void deleteNode(int nd);
bool checkNode(int nd);
bool checkEdge(int nd1, int nd2);
bool isConnectedComponent();
*/
