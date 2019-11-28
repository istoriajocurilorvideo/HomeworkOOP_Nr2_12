#include "Graf_Neorientat.h"

Graf_Neorientat::Graf_Neorientat(int noduriGN) : Graf(noduriGN){
    for(int index = 0; index < nrNodes; index ++){
        Vector *empty_vec = new Vector();
        gnl.addNode(*(empty_vec));
    }
}

//stil working on it
Graf_Neorientat::Graf_Neorientat(Lista l) : Graf(l.getSize()) {

}

Graf_Neorientat::~Graf_Neorientat()
{
    gnl.emptyList();
}

Graf_Neorientat::Graf_Neorientat(const Graf_Neorientat& other) : Graf(other.gnl.getSize())
{

}

Graf_Neorientat& Graf_Neorientat::operator=(const Graf_Neorientat& rhs)
{
    if (this == &rhs)
        return *this;
    return *this;
}
void Graf_Neorientat::addEdge(int nd1, int nd2) {
    if(nd1 != nd2){
        gnl[nd1].pushBack(nd2);
        gnl[nd2].pushBack(nd1);
    }
    else cout<<"Error: edge nodes are same";
}
void Graf_Neorientat::deleteEdge(int nd1, int nd2){
    gnl[nd1].deleteItemByItem(nd2);
    gnl[nd2].deleteItemByItem(nd1);
}
//either resize your list of vectors or refill(?) an existing vector that has
//been initially deallocated
void Graf_Neorientat::addNode(int nd){

}
//either delete last node or empty a vector
void Graf_Neorientat::deleteNode(int nd) {}
//vector is empty(should create a function)
bool Graf_Neorientat::checkNode(int nd) {}
//you know what to do
bool Graf_Neorientat::checkEdge(int nd1, int nd2) {}
//could use a depth first and see if it marks all nodes


///                                                 NU UITA SA FACI UN GITHUB


bool Graf_Neorientat::isConnectedComponent() {}
void Graf_Neorientat::print(ostream& out) const {
    unsigned int ind1, ind2;
    for(ind1=0; ind1 < nrNodes; ind1++){
        Vector v_t(gnl[ind1]);
        out<<ind1<<" : ";
        for(ind2 = 0; ind2 < v_t.getSize(); ind2++)
            out<<v_t[ind2]<<" ";
        out<<endl;
    }
}
void Graf_Neorientat::read(istream& in) {};
//asta imi spune parcurgere in latime pe un arbore
void Graf_Neorientat::showTreeParents() {};
