#pragma once
#include <string>

class Course{
private:
    std::string codCourse{"00000"};
    float note{0};
public:
    Course();
    Course(std::string codeCourse);
    Course(std::string codeCourse, float cal);
    ~Course();
    Course(const Course &that); // Copy Constructor
    //Course(Course &&that) noexcept; // Move Constructor
    const std::string &getCodCourse() const;
    void setCodCourse(const std::string &codCourse);
    float getNote() const;
    void setNote(float note);
};