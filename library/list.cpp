#include <iostream>
#include <string>
#include "list.h"

using namespace std;

int list::getLongitud() {
    return list::longitud;
}

list::list() {
    //cout<<"list()"<<endl;
}

list::list(alumno element, Node *nextnode) {
    this->FirstNode = new Node(element, nextnode);
}

list::~list() {
    //std::cout<<"~list()"<<std::endl;
    delete FirstNode;
}

bool list::esVacia() {
    if (FirstNode == nullptr){
        return true;
    }else return false;
}

bool list::elementRepeated(const alumno &element) {
    bool isRepeated = false;
    if (!esVacia()){
        Node *aux = this->FirstNode;
        while (aux != nullptr){
            if (aux->getFirstNode().getCodigo() == element.getCodigo() &&
            aux->getFirstNode().getCourse().getCodCourse() == element.getCourse().getCodCourse()){
                return true;
            }
            aux = aux->getNext();
        }
    }

    return isRepeated;
}

void list::agregarElemento(const alumno &element) {
    if (esVacia()){
        this->FirstNode = new Node(element, nullptr);
    } else{
        if (!elementRepeated(element)){
            Node *aux = this->FirstNode;
            while (aux->getNext() != nullptr){
                aux = aux->getNext();
            }
            Node *newNode = new Node(element, nullptr);
            aux->setNext(newNode);
            head = newNode;
        } else std::cout<<"Elemento repetido "<<element.getCodigo()<<" con curso: "
        <<element.getCourse().getCodCourse()<<std::endl;
    }

    longitud++;
}

void list::mostrarElementos() {
    if (!esVacia()){
        Node *aux = this->FirstNode;
        while (aux != nullptr){
            aux->printValues();
            aux = aux->getNext();
        }
    }
}

void list::cursoCompartido(std::string codigo) {
    int count = 0;
    if (!esVacia()){
        Node *aux = this->FirstNode;
        while (aux != nullptr){
            if (aux->getFirstNode().getCourse().getCodCourse() == codigo){
                count++;
                aux->printValues();
            }
            aux = aux->getNext();
        }
        std::cout<<"Cantidad de alumnos que llevan el curso "<<codigo<<" es "<<count<<std::endl;
    }
}

alumno list::iesimo(int pos) {
    int n = getLongitud();
    if (pos >= 1 && pos <= n){
        int i = 1;
        Node *aux = this->FirstNode;
        while (aux != nullptr){
            if (i == pos){
                return aux->getFirstNode();
            }
            i++;
            aux = aux->getNext();
        }
    }

    return alumno("-1", Course());
}

int list::ubicacion(const alumno &element) {
    int i = 1;
    Node *aux = this->FirstNode;
    while (aux != nullptr){
        if (aux->getFirstNode().getCodigo() == element.getCodigo()){
            return i;
        }
        aux = aux->getNext();
        i++;
    }

    return 0;
}

float list::promedioNota(const std::string codigo) {
    int i = 0;
    float promedio = 0;
    if (!esVacia()){
        Node *aux = this->FirstNode;
        while (aux != nullptr){
            if (aux->getFirstNode().getCodigo() == codigo){
                promedio += aux->getFirstNode().getCourse().getNote();
                i++;
            }
            aux = aux->getNext();
        }
    }
    return promedio/i;
}
