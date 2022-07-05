#include "course.h"
#include <iostream>

Course::Course() {
    //std::cout<<"Course()"<<std::endl;
}

Course::Course(std::string code) {
    //std::cout<<"Course(string codeCourse)"<<std::endl;
    codCourse = std::move(code);
}

Course::Course(std::string code, float cal) {
    //std::cout<<"Course(string codeCourse, float cal)"<<std::endl;
    codCourse = std::move(code);
    note = cal;
}

Course::~Course() {
    //std::cout<<"~Course()"<<std::endl;
}

Course::Course(const Course &that) {
    this->codCourse = that.codCourse;
    this->note = that.note;
}
/*
Course::Course(Course &&that) noexcept{
    this->codCourse = that.codCourse;
    this->note = that.note;
    delete(&that);
}*/

const std::string &Course::getCodCourse() const {
    return codCourse;
}

void Course::setCodCourse(const std::string &codCourse) {
    Course::codCourse = codCourse;
}

float Course::getNote() const {
    return note;
}

void Course::setNote(float note) {
    this->note = note;
}
