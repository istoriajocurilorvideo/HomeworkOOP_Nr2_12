#include "Graf_Neorientat.h"

Graf_Neorientat::Graf_Neorientat(int noduriGN) : Graf(noduriGN){
    for(int index = 0; index < nrNodes; index ++){
        Vector *empty_vec = new Vector(nrNodes, -1);
        //gnl.addNode(empty_vec);
    }
}

//stil working on it
Graf_Neorientat::Graf_Neorientat(Lista l) : Graf(l.getSize()){}

Graf_Neorientat::~Graf_Neorientat()
{

}

Graf_Neorientat::Graf_Neorientat(const Graf_Neorientat& other) : Graf(other.nrNodes)
{

}

Graf_Neorientat& Graf_Neorientat::operator=(const Graf_Neorientat& rhs)
{
    if (this == &rhs)
        return *this;
    return *this;
}
void Graf_Neorientat::addEdge(int nd1, int nd2) {

}
//void deleteEdge(int nd2, int nd2);
void Graf_Neorientat::addNode(int nd){

}
//void deleteNode(int nd);
//bool checkNode(int nd);
//bool checkEdge(int nd1, int nd2);
//bool isConnectedComponent();
