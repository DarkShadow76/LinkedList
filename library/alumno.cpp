#include <iostream>
#include "alumno.h"

alumno::alumno() {
    //std::cout<<"alumno()"<<std::endl;
    course = Course();
}

alumno::alumno(string code, Course curso) {
    //std::cout<<"alumno(string codigo, Course course)"<<std::endl;
    codigo = std::move(code);
    course = curso;
}

alumno::~alumno() {
    //std::cout<<"~alumno()"<<std::endl;
}

alumno::alumno(const alumno &that) {
    this->codigo = that.codigo;
    this->course = that.course;
}
/*
alumno::alumno(alumno &&that) noexcept {
    this->codigo = that.codigo;
    this->course = that.course;
    delete(&that);
}*/

const string &alumno::getCodigo() const {
    return codigo;
}

void alumno::setCodigo(const string &codigo) {
    alumno::codigo = codigo;
}

const Course &alumno::getCourse() const {
    return course;
}

void alumno::setCourse(const Course &course) {
    alumno::course = course;
}
