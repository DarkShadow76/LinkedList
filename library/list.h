#pragma once
#include "node.h"
#include "alumno.h"
#include <memory>
#include <string>

class list{
private:
    Node *FirstNode{nullptr}; // por defecto la linked list se le asigna nulo el primer nodo
    //std::unique_ptr<Node> FirstNode{new Node()};

public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int longitud = 0; // tamaño de la linked list
    int getLongitud();
    list();
    list(alumno element, Node *nextnode);
    ~list();
    bool esVacia();
    bool elementRepeated(const alumno &element);
    /** c) Insertar un nuevo nodo a la lista, con código de estudiante y código de curso
    de tal manera que su programa no permita el ingreso de un dato duplicado. **/
    void agregarElemento(const alumno &element);

    /****/

    void mostrarElementos();

    /** b) Determinar cuantos alumnos han llevado un curso con código Y. **/

    void cursoCompartido(std::string codigo);

    /****/
    alumno iesimo(int pos);
    int ubicacion(const alumno &element);
    /** a) Obtener la nota promedio de los cursos que ha llevado un estudiante que
    tenga un código X determinado por el usuario.**/

    float promedioNota(const std::string codigo);

    /****/
};
