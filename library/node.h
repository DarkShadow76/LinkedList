#pragma once
#include "course.h"
#include "alumno.h"

class Node{
private:
    alumno firstNode;
    Node *next{nullptr};
public:
    Node();
    Node(alumno alumno, Node *nextNode);
    ~Node();
    const alumno &getFirstNode() const;
    void setFirstNode(const alumno &firstNode);
    Node *getNext() const;
    void setNext(Node *next);
    void printValues();
};
