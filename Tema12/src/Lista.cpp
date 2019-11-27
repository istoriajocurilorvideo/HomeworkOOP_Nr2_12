#include "Lista.h"
unsigned int Lista::counter_help = 0;

Lista::Lista() : head(nullptr), tail(nullptr) {}

Lista::Lista(Vector *l) : head(nullptr), tail(nullptr)
{

}

Lista::~Lista()
{
    //dtor
}

Lista::Lista(const Lista& other)
{

}

Lista& Lista::operator=(const Lista& rhs)
{
    if (this == &rhs)
        return *this;
    return *this;
}

void Lista::addNode(Vector item)
{
    Node *tmp = new Node;
    tmp->data = item;
    tmp->next = NULL;

    if(head == nullptr) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tail->next;
    }
}


Vector& Lista::operator[] (unsigned int index){
    Node *cur = getElementByIndex(index);
    if(cur == nullptr) throw out_of_range("Index out of bounds");
    return cur->data;
}

Node *Lista::getElementByIndex(unsigned int index) {
    unsigned long int _index = 0;
    Node *cur = head;
    while(cur->next != nullptr && _index != index) {
        cur = cur->next;
        _index++;
    }
    try {
        if(cur == nullptr) {
            throw "Error : item not found";
            return nullptr;
        }
    } catch (const char* message) {
        std::cout<<message;
    }

    return cur;
}

unsigned int Lista::getElementByType(const Vector& elem) {
    Node *temp = head;
    unsigned long int index = 0;
    while(temp != nullptr) {
        if(temp->data == elem)
            return index;
        temp = temp->next;
        index++;
    }
    return -1;
}

void Lista::deleteElementByIndex(unsigned int index) {
    Node *temp = head, *prev;
    for(int i=0; i < index; i++) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}

void Lista::print(ostream& out) const {
    Node *temp = head;
    while(temp != NULL) {
        out<<temp->data<<" ";
        temp = temp->next;
    }
}

void Lista::read(istream& in){

}

unsigned int Lista::getSize() const{
    Node *temp = head;
    counter_help = 0;
    while(temp != nullptr) {
        counter_help++;
        temp = temp->next;
    }
    return counter_help;
}
