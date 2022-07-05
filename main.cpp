/** Debian gnu/linux 5.18.02 cmake version 3.23.2**/
/** IDE Clion Professional **/
#include <iostream>
//#include <memory> // Libreria para usar smart pointers
#include "library/alumno.h"
#include "library/course.h"
#include "library/list.h"

using namespace std;
// funcion main sobrecargada por si es necesario ejecutar el programa con unos argumentos dados por la terminal
int main(int argc, char *argv[]) {

    /**Curso(String codigoCurso, int calificacion)
    recibe como parametro una variable de tipo String y otro de tipo int que es calificacion final total
    El primer digito del codigo de curso hace referencia a nivel academico: "1"-> primer ciclo,
    "2"-> segundo ciclo, etc**/
    Course curso_1("6500",16);
    Course curso_2("4800",17);
    Course curso_3("6300",17);
    Course curso_4("6300",13);

    /**alumno(String codigoAlumno, Course curso)**/
    /** recibe como parametro una variable de tipo String y otro de tipo Course: curso que el alumno ha llevado**/
    alumno alumno_1("000001",curso_1);
    alumno alumno_2("000002",curso_2);
    alumno alumno_3("000003",curso_3);
    alumno alumno_4("000001",curso_4);
/*
    cout<<alumno_1.getCourse().getNote()<<endl;
    cout<<alumno_2.getCourse().getNote()<<endl;
    cout<<alumno_3.getCourse().getCodCourse()<<endl;
*/
    /**Inicializamos la linked list**/
    list L = list();

    /**C) Agregamos elementos de tipo alumno a la linked list**/
    L.agregarElemento(alumno_1);
    L.agregarElemento(alumno_2);
    L.agregarElemento(alumno_3);
    L.agregarElemento(alumno_4);
    L.agregarElemento(alumno_3);

    cout<<"\nElementos en la Linked List L\n"<<endl;
    L.mostrarElementos();
    /**
    if (L.elementRepeated(alumno_1)){
        cout<<"Este elemento seria redundante si fuese agregado a la linked list"<<endl;
    }else cout<<"Este elemento no seria redundate si se agregara a la linked list"<<endl;**/

    cout<<"A) Promedio de Alumno 000001: "<<L.promedioNota("000001")<<endl;
    cout<<"\nB) Alumnos que llevan el curso de codigo 6300"<<endl;
    L.cursoCompartido("6300");

    /**Ignorar**/
    /********* Smart Pointers *********
    shared_ptr<Course> CursoPtr_1 = make_shared<Course>("5755",15);
    shared_ptr<Course> CursoPtr_2 = make_shared<Course>("5700",19);
    shared_ptr<Course> CursoPtr_3 = make_shared<Course>("4200",18);

    shared_ptr<alumno> AlumnoPtr_1 = make_shared<alumno>("000001", *CursoPtr_1);
    shared_ptr<alumno> AlumnoPtr_2 = make_shared<alumno>("000002", *CursoPtr_2);
    shared_ptr<alumno> AlumnoPtr_3 = make_shared<alumno>("000003", *CursoPtr_3);
    //shared_ptr<alumno> AlumnoPtr_1 = new alumno{"000001", *CursoPtr_1};
    list L1Ptr = list();

    L1Ptr.agregarElemento(*AlumnoPtr_1);
    L1Ptr.agregarElemento(*AlumnoPtr_2);
    L1Ptr.agregarElemento(*AlumnoPtr_3);
    cout<<"\nElementos en la Linked List L1Ptr\n"<<endl;
    L1Ptr.mostrarElementos();
    **********************************/

    return 0;
}