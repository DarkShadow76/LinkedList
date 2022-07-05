#pragma once
#include <string>
#include "course.h"

using namespace std;
class alumno{
private:
    string codigo{"000000"}; // Por defecto el alumno es creado con codigo "000000"
    Course course;
public:
    alumno(); // Contructor
    alumno(string codigo, Course course); // Contructor Sobrecargado
    ~alumno(); // Destructor
    alumno(const alumno &that); // Copy Constructor
    //alumno(alumno &&that) noexcept ; // Move Constructor
    /** Getter y setters **/
    const string &getCodigo() const;
    void setCodigo(const string &codigo);
    const Course &getCourse() const;
    void setCourse(const Course &course);
};
