#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    addStudent(const Student& s);
    displayCourseInfo();
    getCourseCode();
    setCourseCode();
    getCourseName();
    setCourseName();
    getMaxStudents();
    setMaxStudents();
    getCurrentStudents();
    setCurrentStudents();
    Course();
    Course(string courseCode, string courseName, int maxstudents, int currentStudents);
    ~Course();
};














#endif
