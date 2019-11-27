#ifndef LISTA_H
#define LISTA_H
#include "Universal.h"
#include "Vector.h"

class Node
{
public:
    Node* next;
    Vector data;
};

class Lista : public ArrayStream
{
public:
    Lista();
    //Lista(unsigned int dim);
    Lista(Vector *l);
    virtual ~Lista();
    Lista(const Lista& other);
    Lista& operator=(const Lista& other);
    void addNode(Vector item);
    Vector &operator[] (unsigned int index);
    Node *getElementByIndex(unsigned int index);
    unsigned int getElementByType(const Vector& elem);
    void deleteElementByIndex(unsigned int index);
    unsigned int getSize() const;
protected:

private:
    static unsigned int counter_help;
    void print(ostream& out) const;
    void read(istream& in);
    Node *head, *tail;
};

#endif // LISTA_H
