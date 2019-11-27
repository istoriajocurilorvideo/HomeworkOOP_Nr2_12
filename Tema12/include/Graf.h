#ifndef GRAF_H
#define GRAF_H
#include "Universal.h"

class Graf : public ArrayStream
{
    public:
        Graf(int nr_noduri) : nrNodes(nr_noduri) {};
        virtual ~Graf();
        virtual void addEdge(int nd1, int nd2) = 0;
        virtual void deleteEdge(int nd1, int nd2) = 0;
        virtual void addNode(int nd) = 0;
        virtual void deleteNode(int nd) = 0;
        virtual bool checkNode(int nd) = 0;
        virtual bool checkEdge(int nd1, int nd2) = 0;
        virtual bool isConnectedComponent();

    protected:
        unsigned int nrNodes;

    private:
        virtual void print(ostream& out) const = 0;
        virtual void read(istream& in) = 0;
};

#endif // GRAF_H
