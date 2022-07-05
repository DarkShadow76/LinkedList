#include <iostream>
#include "node.h"
#include "alumno.h"

Node::Node() {
    //std::cout<<"Node()"<<std::endl;
}

Node::Node(alumno alumno, Node *nextNode) {
    //std::cout<<"Node(alumno alumno, Node *nextNode)"<<endl;
    firstNode = alumno;
    next = nextNode;
}

Node::~Node() {
    //std::cout<<"~Node()"<<std::endl;
    delete next;
}

const alumno &Node::getFirstNode() const {
    return firstNode;
}

void Node::setFirstNode(const alumno &firstNode) {
    Node::firstNode = firstNode;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

void Node::printValues() {
    std::cout<<"Alumno: "<<this->firstNode.getCodigo()<<std::endl;
    std::cout<<"Curso: "<<this->firstNode.getCourse().getCodCourse()<<std::endl;
    std::cout<<"Nota: "<<this->firstNode.getCourse().getNote()<<std::endl;
}
